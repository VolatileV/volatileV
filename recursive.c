

#include <stdio.h>


int sum(int a, int b);

int main () {

    int i,f,s;
    printf("Enter Lower Limit : ");
    scanf("%d",&i);

    printf("\nEnter Upper Limit : ");
    scanf("%d",&f);

    s = sum(i,f);

    printf("\nSum from %d to %d = %d",i,f,s);

    return 0;

}


int sum (int a, int b) {

    int su;

    if (a>b) {

        return 0;

    }

    else {

        su=a+sum(a+1,b);

        return su;

    }

}

