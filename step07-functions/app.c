#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
  int n = get_size();
  print_grid(n);
}

int get_size(void)
{
  int n;
  do
  {
    n = get_int("Size: ");
  } while (n < 1);
  return n;
}

void print_grid(int size)
{
  for (int col = 0; col < size; col++)
  {
    for (int row = 0; row < size + size; row++)
    {
      printf("#");
    }
    printf("\n");
  }
}
