#include <stdio.h>

int main() {

    float a,b,temp;
    printf("Enter value of a: ");
    scanf("%f",&a);
    fflush(stdin);
    printf("Enter value of b: ");
    scanf("%f",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %0.2f\nAfter swapping, value of b = %0.2f",a,b);
    return 0;

}