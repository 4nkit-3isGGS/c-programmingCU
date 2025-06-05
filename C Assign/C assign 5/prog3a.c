#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", &str2);  

    strcpy(str1, str2);  // copied str2 in str1

    printf("Copied string: %s\n",str1);

    return 0;
}
