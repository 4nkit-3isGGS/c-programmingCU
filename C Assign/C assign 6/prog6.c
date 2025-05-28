#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];  

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);  
        }
        printf("\n"); 
    }

    return 0;
}
