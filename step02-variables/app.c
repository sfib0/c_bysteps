#include <stdio.h>
#include <cs50.c>

int main(void)
{
  string name = "Alice";
  int num = 5;
  float floatNum = 5.5;
  char letter = 'a';
  double doubleNum = 5.5;
  long longNum = 5;

  // \n is just a regex character to create a new line.
  printf("string: %s\n", name);        // Use %s for string
  printf("int: %i\n", num);            // Use %i to print int
  printf("float: %.3f\n", floatNum);   // Use %f to print float,, use .n after % sign to limit to n decimal places
  printf("char: %c\n", letter);        // Use %c to print char
  printf("double: %.3f\n", doubleNum); // Use %f to print double, use .n after % sign to limit to n decimal places
  printf("long: %li\n", longNum);      // Use %li to print long
}