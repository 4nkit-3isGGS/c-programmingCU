#include<stdio.h>
#include<math.h>
int main(){
    int i, n, sum = 0,x;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for(i=0; i<=n; i++){
        sum += pow(x,i) ;
    }
    printf("The sum of series 1 + x^1 + x^2 + x^3 +..... x^%d is: %d",n, sum);
    return 0;
}
