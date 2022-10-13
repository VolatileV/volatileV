

#include <stdio.h>

int factorial (int i);

int main () {


    printf("%d",factorial(5));

    return 0;

}


int factorial (int i) {

    int a,b;
    
    if (i<=0) {

        return 1;

    }


    a = factorial(i-1);
    b = a * i;

    return b;

}

