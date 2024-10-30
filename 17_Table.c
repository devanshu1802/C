// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a Numer :");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int i=1;
//     int sum=0;
//     while(i<=10)
//     {
//         sum +=i;
//         i++;
//     }
//     printf("The sum of first 10 natural numbers is %d\n", sum);
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i=1;
//     int sum=0;
    
//     while(i<=10){

//         sum += i*8;
//         i++;
//     }
//     printf("The sum of the table of 8 is %d\n",sum);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int n;
    int product = 1;
    printf("Enter a number to know it's factorial :");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("The factorial is 1\n");
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {

            product *= i;
        }
    printf("The factorial of the number %d is %d\n", n, product);
    }
    return 0;
}
