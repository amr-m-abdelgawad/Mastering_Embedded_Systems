#include <stdio.h>

int main() {

    float num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%f",&num1);
    fflush(stdin);
    scanf("%f",&num2);
    fflush(stdin);
    scanf("%f",&num3);
    if(num1>num2) {
        if(num1>num3)
            printf("Largest Number: %0.2f",num1);
        else
            printf("Largest Number: %0.2f",num3);
    }
    else {
        if(num2>num3)
            printf("Largest Number: %0.2f",num2);
        else
            printf("Largest Number: %0.2f",num3);
    }
    return 0;

}