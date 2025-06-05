#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str2); 

    // manually copying str2 in str1
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }

    str1[i] = '\0'; 

    printf("Copied string: %s\n", str1);

    return 0;
}
