#include <stdio.h>
#include <math.h>

int main()
{
  float peso, altura;
  printf("Peso em kg: ");
  scanf("%f", &peso);
  printf("Altura em m: ");
  scanf("%f", &altura);
  float imc = peso / pow(altura, 2);
  printf("IMC total: %.2f", imc);
  return 0;
}
