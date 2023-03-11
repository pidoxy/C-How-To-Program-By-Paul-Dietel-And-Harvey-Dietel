#include<stdio.h>
#include<math.h>

int main(){
    unsigned int i,j,k;
    int x,y,z;

    for(i=1; i<= 500; i++){
        for(j=1;j<=500; j++){
            for(k=1;k<=500;k++){
                x = pow(i,2);
                y = pow(j,2);
                z = pow(k,2);

                if ( x + y == z){
                    printf("%u, %u and %u are pythagoran triplets \n", i, j, k);
                } else{
                    continue;
                }
            }
        }
    }


}