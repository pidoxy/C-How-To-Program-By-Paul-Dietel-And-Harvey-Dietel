#include <stdio.h>

int main(void) {
    int score; // score to be entered by user

    printf("Enter your score\n"); // prompt
    scanf("%d", &score); // read an integer

//    if ( (score >= 70) && (score <=100) ) {
//        printf( "Your Grade is A\n" );
//    } // end if
//
//    if ( (score >= 60) && (score <=69) ) {
//        printf( "Your Grade is B\n" );
//    } // end if
//
//    if ( (score >= 50) && (score <=59) ) {
//        printf( "Your Grade is C\n" );
//    } // end if
//
//    if ( (score >= 45) && (score <=49) ) {
//        printf( "Your Grade is D\n" );
//    } // end if
//
//    if ( (score >= 40) && (score <=44) ) {
//        printf( "Your Grade is E\n" );
//    } // end if
//
//    if ( (score >= 0) && (score <=39) ) {
//        printf( "Your Grade is F\n" );
//    } // end if

    if ((score >= 70) && (score <= 100)) {
        printf("Your Grade is A\n");
    } else {
        if ((score >= 60) && (score <= 69)) {
            printf("Your Grade is B\n");
        } else {
            if ((score >= 50) && (score <= 59)) {
                printf("Your Grade is C\n");
            } else {
                if ((score >= 45) && (score <= 49)) {
                    printf("Your Grade is D\n");
                } else {
                    if ((score >= 40) && (score <= 44)) {
                        printf("Your Grade is E\n");
                    } else {
                        if ((score >= 0) && (score <= 39)) {
                            printf("Your Grade is F\n");
                        } else {
                            printf("Input A Score between 0 and 100");
                        }
                    }
                }
            }
        }
    }
}