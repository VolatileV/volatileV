

#include <stdio.h>
//converting celsius to fahrenheit...

int main(){
    float celsius;
    
    printf("\nEnter Temp. in Celsius : ");
    scanf("%f",&celsius);

    printf("\nTemperature in Fahrenheit = %f\n",celsius * 9/5 + 32);

    return 0;

}

