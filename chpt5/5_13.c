#include <stdio.h>
#include <stdlib.h>
// #include<math.h>

int generateRandomNumberInRange(int lower_bound, int upper_bound)
{
    int i, output;

    
        output = lower_bound + (rand() % upper_bound);

    
    
    return output;
}
int main(void)
{
    int i;
    // a
    printf("a - %d \n", generateRandomNumberInRange(1, 6));
    // b
    printf("b - %d \n", generateRandomNumberInRange(100, 1000));
    // c
    printf("c - %d \n", generateRandomNumberInRange(0, 19));
    // d
    printf("d - %d \n", generateRandomNumberInRange(1000, 2222));
    // e
    printf("e - %d \n", generateRandomNumberInRange(-1, 1));
    // f
    printf("f - %d \n", generateRandomNumberInRange(-3, 11));
}
