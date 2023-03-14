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
    if (isRightAngled(3,4,5)){
        printf("The combination gives a right angled triangle");
    }else{
        printf("The combination does not give a right angled triangle");
    }


}