#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r, choice;
    long long result;

    printf("Choose an option:\n");
    printf("1. nPr (Permutation)\n");
    printf("2. nCr (Combination)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input! Ensure that n >= r and both are non-negative.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            // nPr = n! / (n - r)!
            result = factorial(n) / factorial(n - r);
            printf("nPr = %lld\n", result);
            break;

        case 2:
            // nCr = n! / (r! * (n - r)!)
            result = factorial(n) / (factorial(r) * factorial(n - r));
            printf("nCr = %lld\n", result);
            break;

        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
