#include <stdio.h>

int main()
{
  int base, height;
  printf("Medida da base: ");
  scanf("%d", &base);
  printf("Medida da base: ");
  scanf("%d", &height);
  int area = ((base*height)/2);
  printf("Sua área é de %d", area);
  return 0;
}
