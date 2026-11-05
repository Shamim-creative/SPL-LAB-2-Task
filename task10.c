#include <stdio.h>

void task10() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("%c is a Vowel.\n", ch);
                break;
            default:
                printf("%c is a Consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
}
