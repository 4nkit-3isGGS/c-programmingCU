#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    char low_ch = tolower(ch);
    if (low_ch == 'a' || low_ch =='e' || low_ch == 'i' || low_ch == 'o' || low_ch == 'u'){
        printf("%c is a Vowel.",ch);
    } else{
        printf("%c is a Consonant", ch);
    } return 0;
}