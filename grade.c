#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
  int letras = 0;
  int palavras = 1;
  int frase = 0;

  string texto = get_string("Digite seu texto para avaliar:\n");

  int n = strlen(texto);

  for (int i = 0; i < n; i++)
  {
    if (texto[i] >= 'A' && texto[i] <= 'Z')
    {
      letras++;
    }
    else if (texto[i] >= 'a' && texto[i] <= 'z')
    {
      letras++;
    }
    if (texto[i] == ' ')
    {
      palavras++;
    }
    if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?' || texto[i] == ';')
    {
      frase++;
    }
  }
  printf("Letras: %i, Palavras: %i, Frases: %i", letras, palavras, frase);
  printf("\n");
  float l = (letras / palavras) * 100.0;
  float s = (frase / palavras) * 100.0;
  float calc = (0.0588 * l) - (0.296 * s) - 15.8;
  printf("Grade: %f", calc);
  printf("\n");
}