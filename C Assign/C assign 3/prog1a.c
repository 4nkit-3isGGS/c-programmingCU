#include<stdio.h>
int main(){
    int range, next, i=0, j=1;
    printf("Enter the range: ");
    scanf("%d",&range);
    printf("The fibonacci series up to range %d is: ",range);
    while (i <= range ){
        printf("%d, ",i);
        next = i + j;
        i = j;
        j = next;
        

    }
    printf("\n");
    return 0 ;
}