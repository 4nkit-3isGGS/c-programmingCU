#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int i = 0, isEqual = 1;

    printf("Enter first string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Enter second string: ");
    fgets(string2, sizeof(string2), stdin);

    // Remove newline characters from both strings
    while (string1[i] != '\0') {
        if (string1[i] == '\n') {
            string1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (string2[i] != '\0') {
        if (string2[i] == '\n') {
            string2[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (string1[i] != '\0' || string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }

    if (isEqual)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
