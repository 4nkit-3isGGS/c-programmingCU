#include<stdio.h>
int main(){
    int i, j, n, sum = 0;
    long fact ;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fact = 1;

        for(j = 1; j<=i ; j++){
            fact *= j;
        }
        sum += fact;
    }
    printf("S = %d", sum);
    return 0;

}
