#include<stdio.h>
int main(){
    int num, i, j,sum = 0, orgNum;

    printf("Enter a Number: ");
    scanf("%d", &num);
    
    orgNum = num;

    while(num != 0){
        int digit = num % 10;
        int fact = 1;
        for (i = 1; i<=digit; i++ ){
            fact *= i;
        }
        num /= 10;
        sum += fact;
    }
    if (sum == orgNum )
       printf("%d is a Peterson Number", orgNum);
    else   
       printf("%d is not an Peterson Number", orgNum);
       return 0;
}