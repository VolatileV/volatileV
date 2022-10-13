

#include <stdio.h>

int main(){
    // int n,product;
    // printf("Enter the number, the table of which you want: ");
    // scanf("%d",&n);
    
    // for(int i=1;i<=10;i++){

    //     printf("\n%d",n*i);
    
    // }
    
    // int a=1,b;
    // printf("Enter the number, the table of which you want: ");
    // scanf("%d",&b);

    // while(a<=10){
    
    //     printf("\n%d",b*a);
    
    //     a++;
    // }

    int a=1,b;
    printf("Enter the number, the table of which you want: ");
    scanf("%d",&b);

    do{

        printf("\n%d",b*a);
        a++;

    }while(a<=10);

    return 0;

}

