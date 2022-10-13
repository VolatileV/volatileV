

#include <stdio.h>


void num(int i, int c);

int main () {


    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    num(0,a);
}


void num(int i, int c) {


    if (i>c) {
        return;
    }
    printf("\nNumber in sequence : %d",i);
    num(i+1, c);
}

