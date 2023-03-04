#include <stdio.h>

int main() {
    float gross_sales, salary;

    // initialize sales to 0
    // gross_sales = 0.00;

    while(gross_sales != -1) {
        // Input the salesperson's gross sales for the week
        printf("Enter salary in dollars (-1 to end): $ ");
        scanf("%f", &gross_sales);

        //If sentinel value is entered, end the program
        if (gross_sales == -1){
            printf("Program ended \n");
            break;
        }

        // Calculate the salesperson's earnings
        salary = 200 + (0.09 * gross_sales);

        // Display the salesperson's earnings
        printf("Salary is: $%.2f\n ", salary);
    }

    return 0;
}