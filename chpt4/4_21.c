
#include <stdio.h>

int main() {
    int i;

    // characers 0 to 31 are control characters, 32 is space, 127 is delete and the rest are printable characters
    for (i = 0; i < 128; i++) {
        printf("s%c ", i);
        // printf("ASCII value :%d \t and Ascii character :%c \n ",i,i);
        if (i !=0 && i % 9 == 0) {
            printf("\n");
        }
    }

    return 0;
}

