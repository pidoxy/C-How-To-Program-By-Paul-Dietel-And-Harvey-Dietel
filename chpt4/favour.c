
#include <stdio.h>

int main()
{

    int number_rows, c, k, space;

    printf("Enter the number of rows: ");
    scanf("%d", &number_rows);
 
    space = number_rows
    // This first loop handles the number of rows//
    for (k = 1; k <= number_rows / 2 + 1 - c; k++)
    {
        printf(" ");
    }

    // This is another nested loop for the number of asterisk that should be printed//
    for (k = 1; k <= 2 * c - 1; k++)
    {
        printf("*");
        printf("\n");
    }

    // We then do the reverse of the first loop for the second part of the diamond//
    for (c = 1; c <= space; c++)
    {

        for (k = 1; k <= c; k++)
            printf(" ");

        for (k = 1; k <= 2 * c - 1; k++)
            printf("*");
        printf("\n");
    }

}
