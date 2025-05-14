#include<stdio.h>
int main(){
    int i, n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += 1.0/i ;
    }
    printf("S= %.5lf\n", sum);
    return 0;
}