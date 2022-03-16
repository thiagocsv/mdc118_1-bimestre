#include <stdio.h>

int main()
{
  float purchase
  int year, dep;
  printf("Valor do Veiculo: ");
  scanf("%f", &purchase);
  printf("Data da Compra: ");
  scanf("%f", &year);
  printf("Data Atual: ");
  scanf("%f", &dep);
  float val = (dep - year) * 0.01 * purchase;
  printf("Valor Depreciado: %.2f", val);
  return 0;
}
