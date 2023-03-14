#include <math.h>
#include <stdio.h>

double hypotenuse(double side1, double side2)
{
    double hypotenuse = sqrt(side1 * side1 + side2 * side2);
    return hypotenuse;
}

int main()
{
    double side1 = 3.0;
    double side2 = 4.0;
    double h = hypotenuse(side1, side2);
    printf("The hypotenuse of a right triangle with sides %lf and %lf is %lf\n", side1, side2, h);
}