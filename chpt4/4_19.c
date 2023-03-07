#include <stdio.h>

int main()
{
    int product_num1, product_num2, product_num3, product_num4, product_num5;
    double retail_price1, retail_price2, retail_price3, retail_price4, retail_price5;
    double total_retail_value;
    char view_retail_value = "";
    int view_product_num = 0;

    product_num1 = 0;
    product_num2 = 0;
    product_num3 = 0;
    product_num4 = 0;
    product_num5 = 0;

    retail_price1 = 0.0;
    retail_price2 = 0.0;
    retail_price3 = 0.0;
    retail_price4 = 0.0;
    retail_price5 = 0.0;

    // ask user to enter five products and their retail prices
    // use %lf to read a double

    printf("Enter your product numbers and click enter: \n");

    scanf("%d %d %d %d %d", &product_num1, &product_num2, &product_num3, &product_num4, &product_num5);
    printf("\n");
    printf("Enter your the equivalent retail prices($) of your product numbers and click enter: \n");
    scanf("%lf %lf %lf %lf %lf", &retail_price1, &retail_price2, &retail_price3, &retail_price4, &retail_price5);

    // Print input
    printf("_________________________________\n");
    printf("|Product number    Retail price| \n");
    printf("|    %d              $%.2lf     | \n", product_num1, retail_price1);
    printf("|    %d              $%.2lf     | \n", product_num2, retail_price2);
    printf("|    %d              $%.2lf     | \n", product_num3, retail_price3);
    printf("|    %d              $%.2lf     | \n", product_num4, retail_price4);
    printf("|    %d              $%.2lf     | \n", product_num5, retail_price5);

    // Determine retail value for each product
    printf("Want to view the retail value of each product? (y/n): ");
    scanf("%s", &view_retail_value);

    while (view_retail_value == "y")
    {

        // value you want view
        printf("Enter the product number you want to see? (y/n): ");
        scanf("%d", &view_product_num);

        switch (view_product_num)
        {
        case 1:
            printf("The retail value of product number %d is: $%.2lf \n", product_num1, retail_price1);
            break;
        case 2:
            printf("The retail value of product number %d is: $%.2lf \n", product_num2, retail_price2);
            break;
        case 3:
            printf("The retail value of product number %d is: $%.2lf \n", product_num3, retail_price1);
            break;
        case 4:
            printf("The retail value of product number %d is: $%.2lf \n", product_num4, retail_price1);
            break;
        case 5:
            printf("The retail value of product number %d is: $%.2lf \n", product_num5, retail_price1);
            break;
        default:
            printf("Invalid product number \n");
        }

        printf("Want to view the retail value of each product? (y/n): ");
        scanf("%s", &view_retail_value);
    }

    total_retail_value = retail_price1 + retail_price2 + retail_price3 + retail_price4 + retail_price5;
    printf("\n The total retail value is: %.2lf", total_retail_value);
}

// #include <stdio.h>

// int main() {
//     int product_number, quantity, total_retail_value = 0;
//     float price;

//     printf("Enter the product number and quantity sold for each day last week:\n");

//     for (int day = 1; day <= 7; day++) {
//         printf("Day %d:\n", day);

//         for (int i = 1; i <= 5; i++) {
//             printf("Product %d: ", i);
//             scanf("%d", &product_number);
//             printf("Quantity sold: ");
//             scanf("%d", &quantity);

//             switch(product_number) {
//                 case 1:
//                     price = 2.98;
//                     break;
//                 case 2:
//                     price = 4.50;
//                     break;
//                 case 3:
//                     price = 9.98;
//                     break;
//                 case 4:
//                     price = 4.49;
//                     break;
//                 case 5:
//                     price = 6.87;
//                     break;
//                 default:
//                     printf("Invalid product number!\n");
//                     price = 0;
//                     break;
//             }

//             total_retail_value += quantity * price;
//         }
//     }

//     printf("The total retail value of all products sold last week is $%d.\n", total_retail_value);

//     return 0;
// }
