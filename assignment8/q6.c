//6. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an uppercase alphabet.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a lowercase alphabet.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}
