#include<stdio.h>
int main(){
    float marks;
    printf("Enter the marks of the student: ");
    scanf("%f",&marks);
    if (marks>90.0){
        printf("Grade 'A'");
    }
    else if (marks<=90.0 && marks>=81.0 ){
        printf("Grade 'B'");
    }
    else if (marks<81.0 && marks>70.0){
        printf("Grade 'C'");
    }
    else if (marks<=70.0 && marks>=61.0){
        printf("Grade 'D'");
    }
    else if (marks<=60.0 && marks>=51.0){
        printf("Grade 'E'");
    }
    else{
        printf("Grade 'Fail'");
    }
    return 0;
    
    
    

}