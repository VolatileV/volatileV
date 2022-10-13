

#include <stdio.h>

float area_of_rect(float l,float b);

int main(){
    char ch;
    float l,b,fa;

    printf("\nEnter Length : ");
    scanf("%f",&l);

    printf("\nEnter Breadth : ");
    scanf("%f",&b);

    fa=area_of_rect(l,b);

    printf("%f",fa);
}


float area_of_rect(float l, float b){

    return l * b;

}
