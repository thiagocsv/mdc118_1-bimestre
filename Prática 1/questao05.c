#include <stdio.h>
#include <math.h>

int main()
{
  int gbvalue, bytevalue = pow(1024,3);
  printf("Valor em GB: ");
  scanf("%d", &gbvalue);
  int byte = gbvalue * bytevalue;
  printf("Valor total em bytes: %d", byte);
  return 0;
}
