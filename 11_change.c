#include <stdio.h>

void change(int *a)
{
    *a = 77;
}

int main()
{
    int b = 22;
    change(&b);
    printf("b is %d\n", b);
    return 0;
}
