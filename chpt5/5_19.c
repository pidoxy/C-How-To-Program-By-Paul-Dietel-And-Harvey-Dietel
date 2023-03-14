#include<stdio.h>

int solidRectangle(unsigned int side1, unsigned int side2){
    int i,j;

    for(i=0;i<side1;i++){
        for(j=0;j<side2;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    solidRectangle(5,10);
    printf("\n");
    solidRectangle(4,5);

}