#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
    unsigned int i = srand(time(NULL));

    printf("%i", i);
}