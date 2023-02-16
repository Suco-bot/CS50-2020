#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int degraus;
  do
  {
    // Pega o número de escadas
    degraus = get_int("Digite um número de 1 a 8: \n");
    // Faça a pergunta novamente se for diferente do que foi pedido
  } while (degraus < 1 || degraus > 8);
  // Guarde o número informado
  int linhas = degraus;
  // Vamos calcular o espaço das escadas imprimindo " "
  for (int i = 0; i < linhas; i++)
  {
    int espaco = linhas - i - 1;
    while (espaco > 0)
    {
      printf(" ");
      espaco--;
    }
    // Agora que temos a quantidade de escadas e espaços, vamos colocar o #
    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }
    // Para partir para a linha debaixo
    printf("\n");
  }
}