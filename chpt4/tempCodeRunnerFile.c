#include <stdio.h>

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