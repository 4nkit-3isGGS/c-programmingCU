//  * * * * *
//    * * * *
//      * * *
//        * *
//          *

#include<stdio.h>
int main(){
    int i,j , space;
    for (i = 1; i <= 5; i++){
        // for the spaces
        for(space = 1; space< i; space++){
            printf("  ");
        }
        // for the inverted right-angle traingle
        for(j = i; j<=5; j++){
            printf("* ");
        }
        printf("\n");
    }
return 0;
}