#include <stdio.h>
#include <string.h>

int main() {
    char str1[100]; 
    int length = 0;

    printf("Enter a word: ");
    scanf("%s", &str1); 

    while(str1[length] != '\0'){
        length += 1;
    }
    
    printf("Length of the string is %d\n", length);  

    return 0;
}
