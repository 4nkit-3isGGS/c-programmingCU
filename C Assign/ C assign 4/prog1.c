#include <stdio.h>

int CallByValue(int x, int y){
    printf("\nCALL BY VALUE\n");
    printf("Numbers before swapping: %d, %d\n",x,y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Numbers after swapping: %d, %d\n",x,y);
    printf("Inside CallByValue x = %d, y = %d\n",x,y);
    return 0;
    
}

int CallByReference(int *x, int *y){
    printf("\nCALL BY REFERENCE\n");
     printf("Numbers before swapping: %d, %d\n",*x,*y);
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("Numbers after swapping: %d, %d\n",*x,*y);
    printf("Inside CallByReference x = %d, y = %d\n",*x,*y);
    return 0;
}

int main(){
    int a = 5, b = 6;

    // Call By Value
    CallByValue(a, b); // passing the copy of the values
    printf("Outside CallByValue: a = %d, b = %d\n\n", a, b);

    // Resetting the values
    a = 5; b = 6;

    // Call By Reference
    CallByReference(&a, &b); //passing the addrress of varibales using pointers
    printf("Outside CallByReference: a = %d, b = %d\n\n", a, b);

    return 0;
}

