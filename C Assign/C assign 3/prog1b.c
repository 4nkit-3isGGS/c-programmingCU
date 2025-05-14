#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The 1st Fibonacci number is: 0\n");
        return 0;
    } else if (n == 2) {
        printf("The 2nd Fibonacci number is: 1\n");
        return 0;
    }
    else if(n<=0){
        printf("Invalid Entry");
    }

    for (i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    printf("The %dth Fibonacci number is: %d\n", n, b);

    return 0;
}
