#include<stdio.h>

/*
Write a function that displays a solid rectangle of asterisks whose
sides are specified in the integer parameters side1 and side2. For example, if the sides are 4 and 5,
the function displays the following
*/

int solidRectangle(unsigned int side1, unsigned int side2,  char fillCharacter ){
    int i,j;

    for(i=0;i<side1;i++){
        for(j=0;j<side2;j++){
            printf("%c", fillCharacter);
        }
        printf("\n");
    }

    return 0;
}

int main(){

    char fill_character;

    // call function 
    solidRectangle(5,10, '*');
    printf("\n");
    solidRectangle(4,5, '@');
    printf("\n");
    solidRectangle(6,8, '#');
    printf("\n");
    solidRectangle(7,5, '+');
    printf("\n");

    // printf("What character will you like to be print: ");
    // scanf("%c", &fill_character);

    // solidRectangle(4,5, fill_character);
    // printf("\n");
}