#include <stdio.h>

int main()
{
    int n;
    int is_prime = 1;
    printf("Enter a number :");
    scanf("%d", &n);
    if (n <= 1)
    {
        is_prime = 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime)
    {
        printf("The given number is prime \n");
    }
    else
    {
        printf("The given number is not prime\n");
    }
    return 0;
}
