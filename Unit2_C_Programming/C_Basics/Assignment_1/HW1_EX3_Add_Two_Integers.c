#include <stdio.h>

int main() {

    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d",&num1);
    fflush(stdin);
    scanf("%d",&num2);
    printf("Sum: %d",num1+num2);
    return 0;

}