#include <stdio.h>
#include <cs50.c>
#include <stdlib.h>

int main(void)
{
  // Prompt user for size
  int n;
  do
  {
    n = get_int("Size: ");
  } while (n < 1);

  // Print square of hashes
  for (int col = 0; col < n; col++)
  {
    for (int row = 0; row < n + n; row++)
    {
      printf("#");
    }
    printf("\n");
  }
}