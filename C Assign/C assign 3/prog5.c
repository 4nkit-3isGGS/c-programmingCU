#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

int main() {
    int start, end;
    
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range! Starting value should be less than or equal to ending value.\n");
        return 1;
    }
    
    printf("All Perfect Numbers Within the given Range are:\n");

    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);  
        }
    }
    printf("\n");  

    return 0;
}