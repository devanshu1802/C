// #include <stdio.h>
// int factorial(int n){
//     if (n<0)
//     return -1;
//     else if (n == 0)
//     return 1;
//     else 
//     return (n* factorial (n-1));
// }
// int main(){
//     int fact,n;
//     printf("Enter the no for which you want to know the factorial :");
//     scanf("%d",&n);
//     fact =factorial(n);
//     printf("Factorial of %d is %d \n",n,fact);
//     return 0;
// }

#include <stdio.h>
int factorial(int n) {
    int a = 1;
    for (int i = 1; i <= n; i++) {
        a *= i;
    }
    return a;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
    printf("Factorial is not defined for negative numbers.\n");
    }
     else 
    {
    printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
