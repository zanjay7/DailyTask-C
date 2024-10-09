#include <stdio.h>

int main() {
    char alphabet;


    printf("Please enter a single letter: ");
    scanf("%c", &alphabet);

    switch (alphabet) {
        case 'a':printf("%c is a vowel\n", alphabet);
        break;
        case 'e':printf("%c is a vowel\n", alphabet);
        break;
        case 'i':printf("%c is a vowel\n", alphabet);
        break;
        case 'o':printf("%c is a vowel\n", alphabet);
        break;
        case 'u':printf("%c is a vowel\n", alphabet);
        break;
         case'A':printf("%c is a vowel\n", alphabet);
        break;
        case 'E':printf("%c is a vowel\n", alphabet);
        break;
        case 'I':printf("%c is a vowel\n", alphabet);
        break;
        case 'O':printf("%c is a vowel\n", alphabet);
        break;
        case 'U':printf("%c is a vowel\n", alphabet);
        break;
        default:printf("%c It's a consonant\n", alphabet);
    }

    return 0;
}
