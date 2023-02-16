#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  float devido;
  float pago;
  do
  {
    float devido = get_float("Qual o valor devido? \n");
    printf(devido);
    float pago = get_float("Qual o valor de pagamento? \n");
  }
  while (pago > devido && devido < pago)
  {
    
  }
}