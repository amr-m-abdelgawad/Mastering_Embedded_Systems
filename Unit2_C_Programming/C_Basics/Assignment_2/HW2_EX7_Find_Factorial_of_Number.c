#include <stdio.h>

int main() {

    int num,i,fac=1;
    printf("Enter a integer: ");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("Factorial = 1");
    }
    else if(num < 0)
    {
        printf("ERROR!!! Factorial of negative number doesn't exist.");
    }
    else {
        for(i=1;i<=num;i++) {
            fac *= i;
        }
        printf("Factorial = %d",fac);
    }
    return 0;

}