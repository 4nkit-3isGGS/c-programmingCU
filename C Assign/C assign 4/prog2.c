#include <stdio.h>
// factorial using recursion
int fact(int n){
    if (n==1)
      return 1;
    else
    return n * fact(n-1);  // recursion
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0 ;
}