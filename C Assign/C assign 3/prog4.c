#include <stdio.h>
#include <math.h>

int isArmstorng(int num){
    int temp, digit;
    int result = 0;

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        result += pow(digit, 3);
        temp /= 10;
    }

    
 return num == result;
}

int main(){
    printf("Armstrong numbers between 0 and 999 are:\n");

    for (int i = 0;i <= 999;i++){
        if (isArmstorng(i)) {
            printf("%d ", i);
            
        }
    } 
    printf("/n");
    return 0;

}
 