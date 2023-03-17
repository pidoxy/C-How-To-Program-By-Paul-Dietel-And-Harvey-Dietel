#include <math.h>
#include <stdio.h>

double hypotenuse(double side1, double side2)
{
    // pythagoras theorem
    double hypotenuse = sqrt(side1 * side1 + side2 * side2);
    // double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
    return hypotenuse;
}

int main()
{
    double sample1_side1 = 3.0;
    double sample1_side2 = 4.0;
    double sample2_side1 = 5.0;
    double sample2_side2 = 12.0;
    double sample3_side1 = 8.0;
    double sample3_side2 = 15.0;

    printf("\nThe hypotenuse of a right triangle with sides %f and %f is %f\n", sample1_side1, sample1_side2 , hypotenuse(sample1_side1, sample1_side2));
    printf("\nThe hypotenuse of a right triangle with sides %f and %f is %f\n", sample2_side1, sample2_side2 , hypotenuse(sample2_side1, sample2_side2));
    printf("\nThe hypotenuse of a right triangle with sides %f and %f is %f\n", sample3_side1, sample3_side2 , hypotenuse(sample3_side1, sample3_side2));
}