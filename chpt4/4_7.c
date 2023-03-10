#include<stdio.h>

int main(void){
    int a, d, i;

    printf("What is your first number? ");
    scanf("%d", &a);

    printf("What is your difference? ");
    scanf("%d", &d);

    for (i = 0; i <= 6; i++ ){
        printf("%d \t", a);

        a += d;
    }
}