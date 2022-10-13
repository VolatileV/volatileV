

#include <stdio.h>


int main() {

    char chr;
    float a,b;

    printf("\nEnter Operator : ");
    scanf("%c",&chr);

    printf("\nEnter First Number : ");
    scanf("%f",&a);

    printf("\nEnter Second Number : ");
    scanf("%f",&b);

    if (chr=='+')
    {
        printf("Sum is %f",a + b);
    }
    else if (chr=='-')
    {
        printf("\nDifference is %f",a - b);
    }
    else if (chr=='*')
    {
        printf("\nProduct is %f",a * b);
    }
    else if (chr=='/')
    {
        printf("\nQuotient is %f",a / b);
    }
    else
    {
        printf("\nWrong input...");
    }
    
    return 0;

}

