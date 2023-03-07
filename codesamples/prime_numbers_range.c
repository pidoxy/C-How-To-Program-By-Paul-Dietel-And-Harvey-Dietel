#include <stdio.h>
#include <stdbool.h>

int main()
{
    int max_num = 0;
    int min_num = 0;

    printf("Enter a minimum number:");
    scanf("%d", &min_num);
    printf("Enter a minimum number:");
    scanf("%d", &max_num);

    printf("Prime numbers between %d and %d:\n", min_num, max_num);
    for (int i = min_num; i <= max_num; i++)
    {
        bool is_prime = true;
        if (i < 2)
        {
            is_prime = false;
            continue;
        }
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

