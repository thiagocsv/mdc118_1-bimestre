#include <stdio.h>

int main()
{
  int one, two;
  printf("Primeiro Numero: ");
  scanf("%d", &one);
  printf("Segundo Numero: ");
  scanf("%d", &two);
  int div = one / two;
  int res = one % two;
  printf("Quociente %d e Resto %d", div, res);
  return 0;
}
