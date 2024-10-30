#include <stdio.h>
int main()
{
    float a, b, c, d, e, r1, r2;
    printf("Enter the Marks of the 5 subjects\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    r1 = ((a + b + c + d + e)/500)*100;
    
    printf("The Percentage of your marks is  %f\n", r1);
    if(r1>=90)
    {
    printf("Your Grade is A\n");
    }
    else if(r1>=80)
    {
    printf("Your Grade is B\n");
    }
    else if(r1>=70)
    {
    printf("Your grade is C\n");
    }
    else if(r1>=60){
    printf("Your grade is D\n");
    }
    else if(r1>=50){
    printf("Your grade is E\n");
    }
    else{
        printf("You are Fail\n");
    }
    return 0;
    
}
