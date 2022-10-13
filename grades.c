

#include <stdio.h>

int main() {

    float a;

    printf("\nEnter your marks : ");
    scanf("%f",&a);

    if (a<30 && a>=0)
    {
        printf("\nYour grade is C\n");
    }
    
    else if (a < 70 && a >= 30)
    {
        printf("\nYour grade is B\n");
    }
    
    else if(a < 90 && a >= 70)
    {
        printf("\nYour grade is A\n");
    }
    
    else if (a <= 100 && a >= 90)
    {
        printf("\nYour grade is A+\n");
    }
    
    else{
        printf("\nInvalid Input...\n");
    }
    return 0;
}

