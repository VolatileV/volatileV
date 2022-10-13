

#include <stdio.h>

int main(){
    int a;

    printf("Enter a number : ");
    scanf("%d",&a);

    a%2 == 0 ? printf("Number is even") : printf("Number is odd");

    return 0;
}

