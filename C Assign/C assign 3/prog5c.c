
//        1                                   1
//      2 2 2            ------>            2 2   2
//    3 3 3 3 3          ------>          3 3 3   3 3
//  4 4 4 4 4 4 4                       4 4 4 4   4 4 4




#include<stdio.h>
int main(){
    int i,j ,k,space;
    for (i = 1; i <= 4; i++){
        // for the spaces
        for(space = 4; space>i; space--){
            printf("  ");
        }
        // for the first right-angled triangle      
        for(j = 1; j<i; j++){
            printf("%d ",i);
        }
        // for the second right-angled triangle
        for(k=2; k<=(i+1); k++){
            printf("%d ",i);
        }
        printf("\n");
    }
return 0;
}
