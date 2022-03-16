#include <stdio.h>

int main()
{
  printf("Media Aritmetica de 3 Numeros");
  float one, two, three;
  printf("\nPrimeiro Numero: ");
  scanf("%f", &one);
  printf("Segundo Numero: ");
  scanf("%f", &two);
  printf("Terceiro Numero: ");
  scanf("%f", &three);
  float media = (one + two + three) / 3;
  printf("Media: %.2f", media);
  return 0;
}
