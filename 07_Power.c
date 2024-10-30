#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;  
    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    int positiveExponent = exponent < 0 ? -exponent : exponent;

    for (int i = 0; i < positiveExponent; i++) {
        result *= base;
    }

    if (exponent < 0) {
        printf("Result: 1/%.0lld = %g\n", result, 1.0 / result);
    } 
    else {
        printf("Result: %lld\n", result);
    }

    return 0;
}
