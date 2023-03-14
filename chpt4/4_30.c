// Counting letter grades with switch.
#include <stdio.h>

int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade; // one grade

    // loop until user types end-of-file key sequence

// non nested if else statements
    // while ((grade = getchar()) != EOF)
    // {

    //     // determine which grade was input
    //     if (grade == 'A' || grade == 'a')
    //     {
    //         ++aCount;
    //     }
    //     else if (grade == 'B' || grade == 'b')
    //     {
    //         ++bCount;
    //     }
    //     else if (grade == 'C' || grade == 'c')
    //     {
    //         ++cCount;
    //     }
    //     else if (grade == 'D' || grade == 'd')
    //     {
    //         ++dCount;
    //     }
    //     else if (grade == 'F' || grade == 'f')
    //     {
    //         ++fCount;
    //     }
    //     else if (grade == '\n' || grade == '\t' || grade == ' ')
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         printf("%s", "Incorrect letter grade entered.");
    //         puts("Enter a new grade.");
    //     }

    // } // end while

    while ((grade = getchar()) != EOF)
    {

        // determine which grade was input
        if (grade == 'A' || grade == 'a')
        {
            ++aCount;
        }
        else if (grade == 'B' || grade == 'b')
        {
            ++bCount;
        }
        else if (grade == 'C' || grade == 'c')
        {
            ++cCount;
        }
        else if (grade == 'D' || grade == 'd')
        {
            ++dCount;
        }
        else if (grade == 'F' || grade == 'f')
        {
            ++fCount;
        }
        else if (grade == '\n' || grade == '\t' || grade == ' ')
        {
            continue;
        }
        else
        {
            printf("%s", "Incorrect letter grade entered.");
            puts("Enter a new grade.");
        }

    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}
