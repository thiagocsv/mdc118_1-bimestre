#include <stdio.h>

int main()
{
  float value, hours;
  printf("Valor da hora: ");
  scanf("%f", &value);
  printf("Horas de trabalho no mes: ");
  scanf("%f", &hours);
  float brute_sal = value * hours;
  float IR = brute_sal * 0.25, INSS = brute_sal * 0.11;
  float liquid_sal = brute_sal - IR - INSS;
  float tax = brute_sal - liquid_sal;
  printf("Salario Bruto: %.2f", brute_sal);
  printf("\nSalario Liquido: %.2f", liquid_sal);
  printf("\nImposto Descontado: %.2f", tax);
  return 0;
}
