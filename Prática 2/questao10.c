#include <stdio.h>

int main()
{
  int input;
  printf("Insira Numero: ");
  scanf("%d", &input);
  for(int i=0;i<=10;i++)
  {
    int tab = input * i;
    printf("\n%dx%d = %d ", input, i, tab);
  }
}
