#include<stdio.h>
void main(){

    int n;

    printf("Enter the Number of elements: ");
    scanf("%d", &n);

    int A[n];
    
    for(int i = 0; i < n; i++){
        int data;
        printf("enter element:");
        scanf("%d", &data);
        A[i] = data;
    }

    printf("Array elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    int max = A[0];
    for (int i = 0; i < n; i++){
        if (A[i] < A[i+1])
            max = A[i+1];
    }
    printf("\nMaximum Element in the array is: %d\n",max);
}