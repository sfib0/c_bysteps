#include <cs50.c>
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    n = get_int("Size: ");
  } while (n < 1);

  for (int col = 0; col < n; col++)
  {
    for (int row = 0; row < n + n; row++)
    {
      printf("#");
    }
    printf("\n");
  }
}