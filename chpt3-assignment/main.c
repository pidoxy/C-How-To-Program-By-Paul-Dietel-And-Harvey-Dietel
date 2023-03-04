#include <stdio.h>
#include <math.h>

int main()
    {
//    mortgage calculator
        int account_num, mortgage_term;
        float mortgage_amount, interest_rate, total_interest, total_amount_payable, monthly_payment;

        printf("Enter account number: ");
        scanf("%d", &account_num);

        printf("Enter mortgage amount: ");
        scanf("%f", &mortgage_amount);

        printf("Enter mortgage term (in years): ");
        scanf("%d", &mortgage_term);

        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &interest_rate);

        // Calculate total interest payable and total amount payable
        total_interest = mortgage_amount * interest_rate * mortgage_term/12;
        total_amount_payable = mortgage_amount + total_interest;

        // Calculate monthly payment
        monthly_payment = roundf(total_amount_payable / mortgage_term);

        // Display results
        printf("\nAccount number: %d\n", account_num);
        printf("Total interest payable: $%.2f\n", total_interest);
        printf("Total amount payable: $%.2f\n", total_amount_payable);
        printf("Monthly payment: $%.0f\n", monthly_payment);

        return 0;
    }

