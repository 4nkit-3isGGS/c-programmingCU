#include<stdio.h>
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0 && (a%2==0))
    {
        printf("%d is Even Positive Number",a);
    }
    else if (a<0 && (a%2 != 0))
    {
        printf("%d is odd negative number",a);
    }
    else{
        printf("Number is 0. Please enter another number");
    }
    
}