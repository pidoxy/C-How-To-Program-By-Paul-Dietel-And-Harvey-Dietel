#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //     int number_rows, c, k, space;

    //     printf("Enter the number of rows: ");
    //     scanf("%d", &number_rows);

    //     // This first loop handles the number of rows//
    //     space = number_rows / 2;
    //     for (c = 0; c <= number_rows / 2; c++)
    //     {

    //         // This is a nested loop for the number of spaces that should appear on each row//
    //         for (k = 0; k <= space; k++)
    //             printf(" ");

    //         // This is another nested loop for the number of asterisk that should be printed//
    //         for (k = 1; k <= 2 * c - 1; k++)
    //             printf("*");
    //         printf("\n");
    //         space--;
    //     }
    //     space = 0;
    //     // We then do the reverse of the first loop for the second part of the diamond//
    //     for (c = number_rows; c > 0; c = c-2)
    //     {

    //         for (k = 0; k < space; k++)
    //             printf(" ");

    //         for (k = 0; k < c; k++)
    //             printf("*");

    //         printf("\n");
    //         space++;
    //     }
    // }

    int counter, gift;

    for (counter = 1; counter <= 3; counter++)
    {

        printf("\n\tOn the ");

        switch (counter)
        {
        case 1:
            printf("First");
            // break;
        case 2:
            printf("Second");
            // break;
        case 3:
            printf("Third");
            break;
        case 4:
            printf("Fourth");
            break;
        case 5:
            printf("Fifth");
            break;
        case 6:
            printf("Sixth");
            break;
        case 7:
            printf("Seventh");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Ninth");
            break;
        case 10:
            printf("Tenth");
            break;
        case 11:
            printf("Eleventh");
            break;
        case 12:
            printf("Twelvth");
            break;
        
        }

        printf(" day of Christmas my true love sent to me\n");
        for (int gift = counter; gift > 0; gift--)
        {

            switch (gift)
            {
            case 12:
                printf("\t\tTwelve Drummers Drumming\n");
                break;
            case 11:
                printf("\t\tEleven Pipers Piping\n");
                break;
            case 10:
                printf("\t\tTen Lords a Leaping\n");
                break;
            case 9:
                printf("\t\tNine Ladies Dancing\n");
                break;
            case 8:
                printf("\t\tEight Maids a Milking\n");
                break;
            case 7:
                printf("\t\tSeven Swans a Swimming\n");
                break;
            case 6:
                printf("\t\tSix Geese a Laying\n");
                break;
            case 5:
                printf("\t\tFive Golden Rings\n");
                break;
            case 4:
                printf("\t\tFour Calling Birds \n");
                break;
            case 3:
                printf("\t\tThree French Hens\n");
                break;
            case 2:
                printf("\t\tTwo Turtle Doves\n");
                break;
            case 1:
                printf("\t\t");
                if (counter > 1)
                    printf("and ");
                printf("A Partridge in a Pear Tree\n");
                break;
            }
        }
    }
}