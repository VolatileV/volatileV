

#include <stdio.h>

int main(){

    int i=0,a;

    printf("Enter number: ");
    scanf("%d",&a);


    do{
        printf("\n%d",i);
        i++;
    }while(i<=a);

    return 0;

}

