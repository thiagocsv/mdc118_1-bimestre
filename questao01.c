#include <stdio.h>

int main)
{
  float A1, A2;
  printf("Nota A1: ");
  scanf("%f", &A1);
  printf("Nota A2: ");
  scanf("%f", &A2);
  float media = (0.4*A1) + (0.6*A2);
  printf("Sua media é %.1f", media);
  return 0;
}
