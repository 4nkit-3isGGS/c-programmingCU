#include<stdio.h>
void main(){
    int a,b;
    printf("Enter Two Numbers: \n")
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping: %d%d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Numbers after swapping: %d%d\n",a,b);
}