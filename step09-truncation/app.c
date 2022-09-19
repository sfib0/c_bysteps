#include <stdio.h>

int main(void)
{
  int a = 2;
  int b = 5;
  // float c = a / b; // 0.000000
  float c = (float)a / b; // 0.400000
  printf("Value of c is: %f", c);
}