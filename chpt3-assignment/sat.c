//
// Created by Emmanuel Idoko on 18/02/2023.
//

#include<stdio.h>
#include<limits.h>
//int main(){
//    int a=0;
//    printf("%d \n",a);
////    preincrement
//    printf("%d -preincrement\n",++a);
//
////    a = 1 + a
//    printf("%d \n",a);
//
//    printf("%d \n",a);
////    postincrement
//
////    a = a + 1
//    printf("%d -postincrement\n",a++);
//    printf("%d \n",a);
//}

//int main(){
//    int number, counter, prime;
//    number = 0;
//    prime = 1;//prime is true by default
//
//
////    divide by factors
//    printf("Enter your number: ");
//    scanf("%d", &number);
//
////    condition to not allow numbers less than or equal to 1
//    if(number <= 1){
//        printf("Number is not a prime number");
//    }
//    else{
////        loop to check for possible divisors
//        for(counter =2; counter < number; counter++){
//            printf("counter: %d \n", counter);
//            if((number % counter) == 0){
//                prime = 0; //prime is false
//            }
//        }
//
//        if (prime ==1 && number > 1){
//            printf("%d is a prime number.", number);
//        }
//        else{
//            printf("%d is not a prime number", number);
//        }
//    }
//
//
//
//
//    return 0;
//}

int main(){
    int number, counter, prime;
    number = 0;
    prime = 1;//prime is true by default


//    divide by factors
    printf("Enter your number: ");
    scanf("%d", &number);

//    condition to not allow numbers less than or equal to 1
    if(number <= 1){
        printf("Number is not a prime number");
    }
    else{
//        loop to check for possible divisors
        counter =2;
        while(counter < number){
            printf("counter: %d \n", counter);
            if((number % counter) == 0){
                prime = 0; //prime is false
            }
            counter++;
        }

        if (prime ==1 && number > 1){
            printf("%d is a prime number.", number);
        }
        else{
            printf("%d is not a prime number", number);
        }
    }




    return 0;
}

//int main(){

//}