

//sum of digits using recursion...
#include <stdio.h>


int sum(int a);

int main () {

    int a;

    printf("Enter a number : ");
    scanf("%d",&a);

    printf("The Sum of the Digits of the Number is %d.",sum(a));

}


int sum(int a){


    int s=0;
    if (a == 0) {
        return 0;
    }

    s = a % 10 + sum(a/10);

    return s;

}

