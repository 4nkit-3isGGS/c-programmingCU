#include <stdio.h>
#include <string.h>

int main() {
    char str1[100]; 
    int length;

    printf("Enter a word: ");
    scanf("%s", str1);  

    length = strlen(str1);  

    printf("Length of the string is %d\n", length);  

    return 0;
}
