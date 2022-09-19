#include <cs50.c>
#include <stdio.h>

int main(void)
{
  int start;
  do
  {
    start = get_int("Start: ");
  } while (start < 9);

  int end;
  do
  {
    end = get_int("End: ");
  } while (end < start);

  int years = 0;
  while (start < end)
  {
    int borns = start / 3;
    int passes = start / 4;
    start += borns;
    start -= passes;
    years++;
  }
  printf("Year(s): %i\n", years);
}
