

#include <stdio.h>

int main(){

    int a,b=0;
    printf("Enter n (for sum of first n natural numbers): ");
    scanf("%d",&a);

    for(int i=0;i<=a;i++){
        
        b+=i;

    }
    
    printf("%d",b);


    // int c=0,d,sum=0;

    // printf("Enter n (for sum of first n natural numbers): ");
    // scanf("%d",&d);

    // while(c<=d){
    //     sum+=c;
    //     c++;
    // }

    // printf("%d",sum);    

    // int i=0,b,sum=0;
    // printf("Enter n (for sum of first n natural numbers): ");
    // scanf("%d",&b);

    // do{

    //     sum+=i;
    //     i++;

    // }while(i<=b);
    
    // printf("%d",sum);

    return 0;

}

