#include<stdio.h>

int main(void){
    int temp_celsius, temp_fahren;

    temp_celsius =0;
    temp_fahren = 0;
    printf("Enter a temperature in between 30° celsius and 50° celsius: ");
    scanf("%d", &temp_celsius);

    printf("%.2f - fah", ((float) 9/5 * temp_celsius));
    temp_fahren = ((float) 9/5 * temp_celsius) + 32;

    printf("\n-----------------------------\n");
    printf("|Celsius(°C) | Fahrenheit(°F)|\n");
    printf("|%d          | %d            |\n", temp_celsius, temp_fahren);
}