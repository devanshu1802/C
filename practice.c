#include <stdio.h>

int main() {
    int a[25][25], b[25][25], c[25][25], i, j, m, n;

    printf("Enter the number of rows and columns of the matrices:\n");
    scanf("%d%d", &m, &n);
    
    printf("\nEnter the elements of matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of matrix B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nThe elements of matrix A are:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe elements of matrix B are:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of matrices A and B (matrix C) is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    int a[25][25], b[25][25], c[25][25], i, j, k, m, n, p, q;

    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d%d", &m, &n);
    
    printf("Enter the number of rows and columns of matrix B:\n");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible. The number of columns in matrix A must equal the number of rows in matrix B.\n");
        return 1;
    }

    printf("\nEnter the elements of matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nThe elements of matrix A are:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe elements of matrix B are:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nThe product of matrices A and B (matrix C) is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
