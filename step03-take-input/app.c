#include <stdio.h>
#include <cs50.c>

int main(void)
{
  string first = get_string(NULL, "What is your first name? ");
  string last = get_string(NULL, "What is your last name? ");
  printf("Hello, %s %s\n", first, last);
}