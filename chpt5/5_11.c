#include <stdio.h>
#include <math.h>


double roundToInteger(double number)
{
    double output;

    output = floor(number + .5);
    // printf("Nearest integer %f\n", output);
    return output;
}

double roundToTenths(double number)
{
    double output;

    output = floor(number * 10 + .5) / 10;
    // printf("Nearest tenths: %f\n", output);
    return output;
}

double roundToHundreths(double number)
{
    double output;

    output = floor(number * 100 + .5) / 100;
    // printf("Nearest hundreths: %f\n", output);
    return output;
}

double roundToThousandths(double number)
{
    double output;

    output = floor(number * 1000 + .5) / 1000;
    // printf("Nearest thousandths: %f\n", output);
    return output;
}

int main(void)
{
    double x = 0;

    printf("Enter the number you want to round to the nearest integer, to the nearest tenth, to the nearest hundredth, to the nearest thousandth : ");
    scanf("%lf", &x);

    while (x != -1)
    {

        printf("Original number - %f, Rounded number to the  to the nearest integer - %f \n", x, roundToInteger(x));
        printf("Original number - %f, Rounded number to the  to the nearest tenth - %f \n", x, roundToTenths(x));
        printf("Original number - %f, Rounded number to the  to the nearest hundredth - %f \n", x, roundToHundreths(x));
        printf("Original number - %f, Rounded number to the  to the nearest thousandth - %f \n", x, roundToThousandths(x));

        printf("\nEnter the number you want to round to the nearest integer: ");
        scanf("%lf", &x);
    }
    if (x == -1)
    {
        printf("\nProgram ended\n");
    }
}