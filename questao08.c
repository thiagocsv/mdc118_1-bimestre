#include <stdio.h>

int main()
{
  int sec_in, h, min, sec;
  printf("Tempo em segundos: ");
  scanf("%d", &sec_in);
  min = sec_in/60;
  h = min/60;
  printf("Tempo correspondente a: %d horas, %d minutos e %d segundos", h, min, sec_in);
  return 0;
}
