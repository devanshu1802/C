#include <stdio.h>
int factorial(int n){
    if (n<0)
    return -1;
    if (n == 0)
    return 1;
    return (n* factorial (n-1));
}
int main(){
    int fact,n;
    printf("Enter the no for which you want to know the factorial :");
    scanf("%d",&n);
    fact =factorial(n);
    printf("\n factorial of %d is %d \n",n,fact);
    return 0;
}