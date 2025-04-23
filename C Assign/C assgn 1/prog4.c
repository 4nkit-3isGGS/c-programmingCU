#include<stdio.h>
#include<string.h>
void main(){
    char temp [10];
    float cel,fahr;
    printf("Enter the temperature with UNIT(either C for celciius or F for Fahrenheit): ");
    scanf("%s",&temp);

    if (temp[strlen(temp)-1] == 'C' || temp[strlen(temp)-1] == 'c')
    {
        sscanf(temp,"%f",&cel); // reads only the numeric part
        fahr = (cel * (9.0/5)) + 32 ;
        printf("Temperature converted to Fahrenheit= %f°F",fahr);
    }
    else if (temp[strlen(temp)-1] == 'F' || temp[strlen(temp)-1] == 'f')
    {
        sscanf(temp,"%f",&fahr); // reads only the numeric part
        cel = (fahr - 32) * (5.0/9);
        printf("Temperature converted to Celcius= %f°C",cel);
    }
    else{
        printf("Invalid input. Please try again");
    }
}