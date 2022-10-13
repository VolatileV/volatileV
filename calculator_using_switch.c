

#include <stdio.h>


int main() {

    char chr;
    float a,b,c;

    printf("\nEnter Operator : ");
    scanf("%c",&chr);

    printf("\nEnter First Number : ");
    scanf("%f",&a);

    printf("\nEnter Second Number : ");
    scanf("%f",&b);

  switch (chr) {
    case '+':
      printf("\nSum is %f",a + b);
      break;
    case '-':
      printf("\nDifference is %f",a - b);
      break;
    case '*':
      printf("\nProduct is %f",a * b);
      break;
    case '/':
      printf("\nQuotient is %f",a / b);
      break;

    default:
      printf("\nError! operator is not correct");

  }
  printf("\nEnter any key to exit : ");
  scanf("%f",&c);

  return 0;
}

