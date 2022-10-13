

#include <stdio.h>

int main(){
    
    // int i,hm=1;
    // printf("Enter a number: ");
    // scanf("%d",&i);

    // for(int d=1;d<i;d++){
        
    //     hm*=d;

    // }
    // printf("\nFactorial is %d",hm*i);
    
    // int i=1,b,c=1;
    // printf("Enter a number: ");
    // scanf("%d",&b);

    // while(i<b){
        
    //     c*=i;
    //     i++;
    
    // }
    
    // printf("\nFactorial is %d",b*c);

    int i=1,b,c=1;
    printf("Enter a number: ");
    scanf("%d",&b);

    do{

        c*=i;
        i++;

    }while(i<b);


    printf("Factorial is %d",b*c);

    return 0;

}

