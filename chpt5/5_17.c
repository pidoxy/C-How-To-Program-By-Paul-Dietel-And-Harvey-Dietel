#include<stdio.h>
#include<math.h>

int isRightAngled(unsigned int x, unsigned int y, unsigned int z){
    x = pow(x,2);
    y = pow(y,2);
    z = pow(z,2);

    if (x+y == z){
        return 1;
    }else if(x + z == y){
        return 1;
    }else if(y+z == x){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    unsigned int a, b, c;
    a = b = c = 0;

    printf("Enter the three sides of the triangle: ");
    scanf("%u%u%u", &a, &b, &c);

    if (isRightAngled(a,b,c)){
        printf("\nThe combination gives a right angled triangle");
    }else{
        printf("\nThe combination does not give a right angled triangle");
    }


}