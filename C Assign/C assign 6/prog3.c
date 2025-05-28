#include <stdio.h>

int main() {
    int A[100], n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left
    for(int i = pos; i < n - 1; i++) {
        A[i] = A[i + 1];
    }

    n--;  

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
