#include <stdio.h>
#include <math.h>

int main()
{
  int sec_in;
  printf("Tempo em segundos: ");
  scanf("%d", &sec_in);
  int hour = sec_in / 3600;
  int min = sec_in / 60;
  int sec = sec_in / 25;
  printf("%d %d %d", hour, min, sec);
  return 0;
}
