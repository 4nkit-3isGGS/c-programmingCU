#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];
    int i, j = 0;

    printf("Enter first string: ");
    scanf("%s", str1);  

    printf("Enter second string: ");
    scanf("%s", str2);  

   
    i = strlen(str1);

    
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  

    printf("Concatenated string: %s\n", str1);

    return 0;
}
