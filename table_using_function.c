

#include <stdio.h>

void table();

int main(){

    int b;
    printf("\nEnter a number: ");
    scanf("%d",&b);

    table(b);

    return 0;
}

void table(int a){

    int p;

    for(int i=1;i<=10;i++){
        
        p=a*i;
        printf("\n%d",p);
    }
}
