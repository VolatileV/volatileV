

#include <stdio.h>


void table(int i);


int main(){

    table(1);

    return 0;
}


void table(int i){


    if (i>10) {

        return;

    }
    
    else {
    printf("%d\n", i * 2);
    }
    table(i+1);

}

