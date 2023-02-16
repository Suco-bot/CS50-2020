#include <cs50.h>
#include <stdio.h>

int main(void)
{
  char c = get_char("Você concorda?\nS para sim\nN para não\n");
  if (c == 's' || c == 'S')
  {
    printf("\nOk, você condordou!\n");
  }
  else if (c == 'n' || c == 'N')
  {
    printf("\nOk, você recusou!\n");
  }
}