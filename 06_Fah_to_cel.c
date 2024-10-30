#include <stdio.h>

int main()
{
    float f, c;
    printf("State the temperature in Fahrenheit\n");
    scanf("%f", &f);
    c = (f-32)*(5.0 / 9.0);
    printf("The value in Celsius is %f\n", c);

    return 0;
}