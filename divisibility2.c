

#include <stdio.h>
//divisibility by 2...

int main(){
    //even -> 1
    //odd -> 0

    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("%d", num % 2 == 0);

    return 0;

}

