#include <stdio.h>
#include <math.h>

/* a program that reads
several numbers and uses the preceding statement to round each of these numbers to the nearest
integer*/

int main(void)
{
    int x = 0, y;

    printf("Enter the number you want to round to the nearest integer: ");
    scanf("%d", &x);

    while (x != -1)
    {
        y = ceil(x + .5);
        printf("The original number is %d and the rounded number is %d\n", x, y);

        printf("\nEnter the number you want to round to the nearest integer: ");
        scanf("%d", &x);
    }
}