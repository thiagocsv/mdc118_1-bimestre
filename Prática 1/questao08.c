#include <stdio.h>
#include <math.h>

int main()
{
  int in, sec, min, h;
  printf("Tempo em segundos: ");
  scanf("%d", &in);
  h = in / 3600;
  min = in % 3600 / 60;
  sec = in % 3600 % 60;
  printf("Tempo correspondente a %d horas, %d minutos e %d segundos", h, min, sec);
  return 0;
}
