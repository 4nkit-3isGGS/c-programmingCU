#include<stdio.h>
int main(){
    int i,n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

     for(i = 1; i<=n; i++){
        if (i % 2 != 0){
            sum += i;
        }
        else{
            sum -= i;
        }
    }
    printf("Sum of series is: %d", sum);
    return 0;
}