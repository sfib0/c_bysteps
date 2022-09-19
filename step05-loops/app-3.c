#include <cs50.c>
#include <stdio.h>

int main(void)
{
  int n = get_int("Size: ");

  while (n < 1)
  {
    n = get_int("Size: ");
  }

  for (int col = 0; col < n; col++)
  {
    for (int row = 0; row < n + n; row++)
    {
      printf("Row: %i\n", row);
    }
    printf("Col: %i\n", col);
  }
}