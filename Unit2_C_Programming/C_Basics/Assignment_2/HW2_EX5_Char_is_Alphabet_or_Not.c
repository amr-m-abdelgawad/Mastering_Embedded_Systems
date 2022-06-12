#include <stdio.h>

int main() {

    char chr;
    printf("Enter an alphabet: ");
    scanf("%c",&chr);
    if((chr >= 'a' && chr <='z') || (chr >= 'A' && chr <='Z'))
        printf("%c is an alphabet.",chr);
    else
        printf("%c is not an alphabet.",chr);
    return 0;

}