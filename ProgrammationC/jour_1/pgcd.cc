#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int a,b;
  while (b == 0 || a == 0)
    {
      printf("Nhap 2 so a va b\n");
      scanf("%i",&a);
      scanf("%i",&b);
    }
  while (b != 0)
    if (a>b)
      a=a-b;
    else
      b=b-a;
  printf("%i\n",a);
  return 0;
}
