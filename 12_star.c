#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of stars (positive integer):\n");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;  
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
    