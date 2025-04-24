#include <stdio.h>

int main() {
    int i, j;
    
    printf("Prime numbers between 1 and 100:\n");
    
    for (i = 2; i <= 100; i++) {
        int flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d is a prime number\n", i);
        } 
    }

    return 0;
}