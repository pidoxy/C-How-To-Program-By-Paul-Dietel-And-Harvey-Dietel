#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // a
    printf("%d\n", 3 + (rand() % 10) * 3);

    /* This statement will print a random number from the set by generating a random integer
     between 0 and 9 using the % operator, and multiplying it by 3
    to get a random multiple of 3 between 0 and 27. We then add 3 to
    this value to get a random number from the set.*/

    // b
    printf("%d\n", 3 + (rand() % 9) * 2);

    /*This statement works similarly to the previous one, but since the set consists of odd numbers, 
    we need to multiply the random integer generated by 2 to get a random odd 
    number between 0 and 16. We then add 3 to this value to get a random number from the set.*/

    // c
    printf("%d\n", 3 + (rand() % 7) * 5);

    /*
    This statement works similarly to the first one, but since the set 
    consists of numbers that are 5 apart, we need to multiply the random integer 
    generated by 5 to get a random multiple of 5 between 0 and 30. We then add 3 to this 
    value to get a random number from the set.
    */
}