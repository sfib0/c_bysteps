#include <stdio.h>

int main(void)
{
  int a = 20;
  int b = 10;

  printf("Addition: %i\n", a + b);       // 30
  printf("Subtraction: %i\n", a - b);    // 10
  printf("Multiplication: %i\n", a * b); // 200
  printf("Division: %i\n", a / b);       // 2
  printf("Modulus: %i\n", a % b);        // 0
  printf("Increment: %i\n", ++a);        // 21
  printf("Decrement: %i\n", --a);        // 20
}