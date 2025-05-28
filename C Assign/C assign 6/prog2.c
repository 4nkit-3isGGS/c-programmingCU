#include <stdio.h>

int main() {
    int A[100];  
    int n, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for(int i = n; i > pos; i--) {
        A[i] = A[i - 1];
    }

    A[pos] = value;
    n++; 

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
