#include <stdio.h>

int main()
{
  int r;
  float pi = 3.1416;
  printf("Medida do raio: ");
  scanf("%d", &r);
  float per = 2*pi*r;
  printf("A medida do perímeto é de %.1f", per);
  return 0;
}
