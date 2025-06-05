#include <stdio.h>

int main() {
    char str1[100];
    char *ptr;
    int length = 0;

    printf("Enter a word: ");
    scanf("%s", str1);  

    ptr = str1;  

    while (*ptr != '\0') {
        length++;
        ptr++; 
    }

    printf("Length of the string is %d\n", length);

    return 0;
}
