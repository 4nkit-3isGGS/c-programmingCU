#include<stdio.h>
void main(){
    int a,b,temp;
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping: %d%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("Numbers after swapping: %d%d\n",a,b);
}