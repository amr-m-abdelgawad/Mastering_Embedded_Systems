#include <stdio.h>

int main() {

    float num1,num2;
    char op;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&op);
    fflush(stdin);
    printf("Enter two operands: ");
    scanf("%f",&num1);
    fflush(stdin);
    scanf("%f",&num2);
    fflush(stdin);
    if (op == '+')
    {
        printf("%0.1f + %0.1f = %0.1f",num1,num2,num1+num2);
    }
    else if(op == '-')
    {
        printf("%0.1f - %0.1f = %0.1f",num1,num2,num1-num2);
    }
    else if(op == '*')
    {
        printf("%0.1f * %0.1f = %0.1f",num1,num2,num1*num2);
    }
    else if(op == '/')
    {
        if(num2 == 0)
            printf("ERROR!!! Math error.");
        else 
            printf("%0.1f / %0.1f = %0.1f",num1,num2,num1/num2);
    }
    else {
        printf("ERROR!!! Wrong operator.");
    }
    return 0;

}