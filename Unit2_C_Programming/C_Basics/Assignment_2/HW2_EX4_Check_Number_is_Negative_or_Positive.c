#include <stdio.h>

int main() {

    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    if(num == 0)
        printf("You entered zero.");
    else if(num>0)
        printf("%0.2f is positive.",num);
    else
        printf("%0.2f is negative.",num);
    return 0;

}