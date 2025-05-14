#include <stdio.h>
#include <math.h>

int isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

int fibonacci_check(int n) {
    int num1 = 5 * n * n + 4;
    int num2 = 5 * n * n - 4;
    
    if (isPerfectSquare(num1) || isPerfectSquare(num2)) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int n;
    printf("Enter a rangw: ");
    scanf("%d", &n);

    for(int i=1;i<=n; i++){
        if (fibonacci_check(i)) {
        continue;
    }else {
        printf("%d, ", i);
    }
}
printf("\n");
    return 0;
}
