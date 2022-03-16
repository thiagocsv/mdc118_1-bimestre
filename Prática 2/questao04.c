#include <stdio.h>
#include <math.h>

int main()
{
  int lar, comp;
  printf("Largura da do terreno: ");
  scanf("%d", &lar);
  printf("Comprimento do terreno: ");
  scanf("%d", &comp);
  double area = lar * comp * pow(10, -4);
  printf("Area em hectares: %lf", area);
  return 0;
}
