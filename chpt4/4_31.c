#include <stdio.h>

int main()
{
    int rows, i, j, space;
    rows = 0;

    printf("Enter odd number of rows in the range 1 to 19: ");
    scanf("%d", &rows);

// check if entered number is in range
    while (rows < 1 || rows > 19)
    {
        printf("Entered Number Out of range!! \n\n");

        printf("Enter odd number of rows in the range 1 to 19: ");
        scanf("%d", &rows);
    }

// check if entered number is odd
    while (rows % 2 == 0)
    {
        printf("Even number of rows entered, enter an odd number \n\n");

        printf("Enter odd number of rows in the range 1 to 19: ");
        scanf("%d", &rows);
    }

    
    // for odd numbers in the range 1 to 19 only
    space = (rows / 2);

    for (i = 0; i < rows / 2; i++)
    {
        for (j = 0; j < space; j++)
            printf(" ");

        for (j = 0; j <= i; j++)
            printf("* ");

        printf("\n");
        space--;
    }

    space = 0;

    {
        for (i = (rows / 2) + 1; i > 0; i--)
        {
            for (j = 0; j < space; j++)
                printf(" ");

            for (j = 0; j < i; j++)
                printf("* ");

            printf("\n");
            space++;
        }
    }

    return 0;
}

// for both odd and even

// int main()
// {
//     int rows, i, j, space;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     if (rows % 2 == 0)
//     {
//         space = (rows / 2) - 1;
//     }
//     else
//     {
//         space = (rows / 2);
//     }

//     for (i = 0; i < rows / 2; i++)
//     {
//         for (j = 0; j < space; j++)
//             printf(" ");

//         for (j = 0; j <= i; j++)
//             printf("* ");

//         printf("\n");
//         space--;
//     }

//     space = 0;
//     if (rows % 2 == 0)
//     {
//         for (i = (rows / 2); i > 0; i--)
//         {
//             for (j = 0; j < space; j++)
//                 printf(" ");

//             for (j = 0; j < i; j++)
//                 printf("* ");

//             printf("\n");
//             space++;
//         }
//     }
//     else
//     {
//         for (i = (rows / 2) + 1; i > 0; i--)
//         {
//             for (j = 0; j < space; j++)
//                 printf(" ");

//             for (j = 0; j < i; j++)
//                 printf("* ");

//             printf("\n");
//             space++;
//         }
//     }

//     return 0;
// }