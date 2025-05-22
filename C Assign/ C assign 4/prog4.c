#include <stdio.h>

int pow(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * pow(x, n - 1);
}

int main() {
    int base, power;
    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    printf("%d raised to the power %d is %d\n", base, power, pow(base, power));

    return 0;
}