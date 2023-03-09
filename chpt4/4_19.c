// #include <stdio.h>

// int main()
// {
//     int product_num, quantity_sold;
//     double retail_price1, retail_price2, retail_price3, retail_price4, retail_price5;
//     double total_retail_value;
//     char view_retail_value = "";
//     char all_for_last_week = "";
//     int view_product_num = 0;

//     product_num = 0;

//     retail_price1 = 2.98;
//     retail_price2 = 4.50;
//     retail_price3 = 9.98;
//     retail_price4 = 4.49;
//     retail_price5 = 6.87;

//     // ask user to enter five products and their retail prices
//     // use %lf to read a double

//     printf("Enter your product numbers and click enter: \n");

//     scanf("%d ", &product_num);
//     printf("\n");
//     printf("Enter your the quantity sold for the day and click enter: \n");
//     scanf("%d", &quantity_sold);

//     printf("Is that all that was sold in the week? (y/n): ");
//     scanf("%d", &all_for_last_week);

//     total_retail_value = retail_price1 * quantity_sold;

//     while (all_for_last_week == "n")
//     {
//         printf("Enter your product numbers and click enter: \n");

//         scanf("%d ", &product_num);
//         printf("\n");
//         printf("Enter your the quantity sold for the day and click enter: \n");
//         scanf("%d", &quantity_sold);
//     }
//     // else if(all_for_last_week == "y"){
//     //     printf("\n The total retail value is: %.2lf", total_retail_value);
//     // }

//     total_retail_value = retail_price1 + retail_price2 + retail_price3 + retail_price4 + retail_price5;
//     printf("\n The total retail value is: %.2lf", total_retail_value);
// }

#include <stdio.h>

int main()
{
    int product_number, quantity, total_retail_value = 0;
    float price;
    double retail_price1, retail_price2, retail_price3, retail_price4, retail_price5;

    // initialize retail prices
    retail_price1 = 2.98;
    retail_price2 = 4.50;
    retail_price3 = 9.98;
    retail_price4 = 4.49;
    retail_price5 = 6.87;

    // Print table data
    printf("_________________________________\n");
    printf("|Product number    Retail price| \n");
    printf("|    %d              $%.2lf     | \n", 1, retail_price1);
    printf("|    %d              $%.2lf     | \n", 2, retail_price2);
    printf("|    %d              $%.2lf     | \n", 3, retail_price3);
    printf("|    %d              $%.2lf     | \n", 4, retail_price4);
    printf("|    %d              $%.2lf     | \n", 5, retail_price5);

    printf("\nEnter the product number and quantity sold for each day last week:\n");
    // sentinel value to end products sold for the day rather than input all 7
    printf("PS: Use -1 to signify the no more products sold for the day\n");

    for (int day = 1; day <= 7; day++)
    {
        printf("Day %d:\n", day);

        for (int i = 1; i <= 5; i++)
        {
            // product number input
            printf("Product %d: ", i);
            scanf("%d", &product_number);

            if(product_number == -1){
                break;
            }
            // quantity sold input
            printf("Quantity sold: ");
            scanf("%d", &quantity);

            switch (product_number)
            {
            case 1:
                price = retail_price1;
                break;
            case 2:
                price = retail_price2;
                break;
            case 3:
                price = retail_price3;
                break;
            case 4:
                price = retail_price4;
                break;
            case 5:
                price = retail_price5;
                break;
            default:
                printf("Invalid product number!\n");
                price = 0;
                break;
            }

        total_retail_value += quantity * price;
    }
}

printf("The total retail value of all products sold last week is $%d.\n", total_retail_value);

return 0;
}
