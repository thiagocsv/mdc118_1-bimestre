#include <stdio.h>

int main()
{
  int input;
  printf("Insira Numero: ");
  scanf("%d", &input);
  char out = (char)input;
  printf("Caractere Correspondente: %c", out);
  return 0;
}
