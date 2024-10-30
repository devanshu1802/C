#include <stdio.h>

int main()
{
    int a, b;
    int sum, difference, product, remainder;

    printf("Enter the value of a\n");
    printf("Enter the value of b\n");
    scanf("%d%d", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    remainder = a % b;

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, difference);
    printf("%d * %d = %d\n", a, b, product);
    printf("%d %% %d = %d\n", a, b, remainder);
    return 0;
}