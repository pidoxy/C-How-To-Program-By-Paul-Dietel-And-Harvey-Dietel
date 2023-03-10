#include<stdio.h>

int main(void){
    int num_of_values, number, count, total;

    number = 0;
    total = 0;
    printf("Enter your sequence of integers with the first as the number of values \n");
    scanf("%d", &num_of_values);

    count = 0;
    printf("Enter Sequence \n");
    while(count < num_of_values){

        scanf("%d", &number);
        total += number;
        count++;

    }

    printf("The sum is %d and the average is %d ", total, total/num_of_values);
}