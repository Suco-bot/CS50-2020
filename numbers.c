#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int numbers[] = {4, 6, 8, 2, 7, 5, 0};

  for (int i = 0; i < 7; i++)
  {
    if (numbers[i] == 0)
    {
      printf("%i\n", numbers[i]);
      printf("Encontrei\n");
      return 0;
    }
  }
  printf("Perdemo\n");
  return 1;
}