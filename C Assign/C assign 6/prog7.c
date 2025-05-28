#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], sum[m][n];

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Adding the matrices
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant Matrix (A + B):\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
