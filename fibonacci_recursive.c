

#include <stdio.h>

int fib(int i);


int main () {


    int choice;


    printf("Enter which number of the fibonacci series you want to display : ");
    scanf("%d",&choice);


    printf("%d",fib(choice));


    return 0;

}


int fib (int i) {


    int a,b,c;


    if (i == 0) {

        return 0;

    }


    else if (i == 1) {
        
        return 1;

    }
    

    a = fib(i-1);
    b = fib(i-2);

    c = a + b;


    return c;


}
