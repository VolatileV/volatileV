

#include <stdio.h>
//logical operators experimentation...

int main(){
    int a,b,c;

    a=3,b=5,c=6;

    printf("%d\n", a + b - c == 0 && a + b  == c + 2);
    printf("%d\n", a + b - c == 0 || a + b == c + 2);
    printf("%d\n", !(a + b - c <= 0 && a + b != c + 2));
    printf("%d",c % 2 == 0);

    return 0;

}

