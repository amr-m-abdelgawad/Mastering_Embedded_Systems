#include <stdio.h>

int main() {

    float num1,num2;
    printf("Enter two integers: ");
    scanf("%f",&num1);
    fflush(stdin);
    scanf("%f",&num2);
    printf("Product: %0.6f",num1*num2);
    return 0;

}