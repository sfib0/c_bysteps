#include <cs50.c>
#include <stdio.h>

int main(void)
{
  string name = get_string(NULL, "Contact Name: ");
  int age = get_int("Contact Age: ");
  string phone_number = get_string(NULL, "Contact Number: ");

  printf("\n");

  printf("Review:\n");
  printf("Name: %s, Age: %i, Number: %s", name, age, phone_number);
}