#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];  // str1 must be large enough to hold the result

    printf("Enter first string: ");
    scanf("%s", str1); 

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);  

    printf("Concatenated string: %s\n", str1);

    return 0;
}
