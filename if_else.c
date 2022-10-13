

#include <stdio.h>

int  main(){
    int a;
    printf("\nEnter age : ");
    scanf("%d",&a);

    if(a>=18) {
        
        printf("\nYou are an adult");
        printf("\nYou are allowed to drive");
        printf("\nYou are allowed to vote\n");
    
    }

    else if (a<=5) {
        
        printf("\nAww Little Baby!!");
        printf("\nYou are not an adult obv!\n");
    }
    
    else {
    
        printf("\nYou are not an adult");
        printf("\nYou are not allowed to drive\n");
    
    }

    printf("\nThank You!\n");
    return 0;
}
