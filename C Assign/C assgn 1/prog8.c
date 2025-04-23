#include<stdio.h>
void main() {
    float principal, rate, time,SI;
    printf("Enter the principal amount:\n");
    scanf("%f",&principal);
    printf("Enter the time period in years:\n");
    scanf("%f", &time);
    printf("Enter the rate of interest:\n");
    scanf("%f",&rate);
    SI = (principal*(rate/100)*time);
    printf("The Simple Interest is:₹%f",SI);
}