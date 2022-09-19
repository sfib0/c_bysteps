#include <cs50.c>
#include <stdio.h>

int main(void)
{
  int start_num = get_int("Starting number of llamas: ");
  int goal_num = get_int("Number of llamas you want to achieve: ");

  int years = 0;

  do
  {
    start_num += start_num / 12;
    ++years;
  } while (start_num < goal_num);

  printf("It will take %i year(s) to achieve %i llamas.", years, goal_num);
}