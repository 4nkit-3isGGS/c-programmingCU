#include <stdio.h>

int main() {
    int i, j, n;
    int totalSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int sum = 0;
        for(j = 1; j <= i; j++) {
            sum += j;
        }
        totalSum += sum;
    }

    printf("The sum of series (1)+(1+2)+(1+2+3)+....+(1+2+3+...+%d) is : %d\n", n, totalSum);
    return 0;
}