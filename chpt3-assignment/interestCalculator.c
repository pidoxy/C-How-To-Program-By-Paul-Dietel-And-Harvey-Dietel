//
// Created by Emmanuel Idoko on 16/02/2023.
//

#include <stdio.h>

int main() {
    float principal, rate, interest;
    int days;

    principal = 0.00;
    rate = 0.00;
    days = 0;

    while(principal != -1) {
        // Input the principal, rate, and days for each loan
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

        //If sentinel value is entered, end the program
        if (principal == -1){
            printf("Program ended");
            break;
        }

        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%i", &days);

        // Calculate the simple interest for each loan
        interest = principal * rate * days / 365;

        // Display the simple interest for each loan
        printf("The interest charge is $%.2f\n", interest);

    }
    return 0;
}
