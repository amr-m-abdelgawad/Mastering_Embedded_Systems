#include <stdio.h>

int main() {

    char chr;
    printf("Enter an alphabet: ");
    scanf("%c",&chr);
    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U' )
        printf("%c is a vowel.",chr);
    else
        printf("%c is a consonant.",chr);
    return 0;

}