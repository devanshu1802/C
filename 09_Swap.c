#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
// #include <stdio.h>
// void swap(int *,int *);
// int main()
// {
//     int i,j;
//     printf("Enter the values of i and j :");
//     scanf("%d%d",&i,&j);
//     printf("Before swapping : %d %d\n",i,j);
//     swap(&i,&j);
//     printf("After swapping :%d %d\n",i,j);
//     return 0;
// }
// void swap (int *a,int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
