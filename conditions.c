#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x = get_int("X: ");
  int y = get_int("Y: ");
  if (x < y)
  {
    printf("X é menor do que Y\n");
  }
  else if (x > y)
  {
    printf("X é maior do que Y\n");
  }
  else
  {
    printf("X e Y são iguais\n");
  }
}