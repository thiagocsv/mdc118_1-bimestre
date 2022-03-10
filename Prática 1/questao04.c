#include <stdio.h>

int main()
{
  float initial, ICMS = 0.17, COFINS = 0.076, PIS_PASEP = 0.0165;
  printf("Valor do produto: ");
  scanf("%f", &initial);
  float final_price = (1 + ICMS + COFINS + PIS_PASEP) * initial;
  printf("Valor com impostos incluidos: %.2f", final_price);
  return 0;
}
