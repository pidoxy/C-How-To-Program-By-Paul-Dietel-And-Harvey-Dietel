#include <stdio.h>

int isEven(unsigned int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;

    number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != -1)
    {
        if (isEven(number))
        {
            printf("\nThe number is even  \n");
        }
        else
        {
            printf("\nThe number is odd \n");
        }

        printf("\nEnter a number: ");
        scanf("%d", &number);
    }
}