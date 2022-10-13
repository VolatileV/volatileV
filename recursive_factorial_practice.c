

#include <stdio.h>


int factorial(int i);

int main () {

    int a;

    printf("Enter the number the factorial of which you want : ");
    scanf("%d",&a);

    printf("Factorial of %d is %d.",a,factorial(a));
    return 0;

}


int factorial(int i) {

    int s;
    if (i<=1) {
        return 1;

    }

    else {

        s = i * factorial(i-1);

        return s;
    }

}

