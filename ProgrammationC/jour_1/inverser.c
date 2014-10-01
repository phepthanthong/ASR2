#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main ()
{
  int n,s=0;
  printf("Nhap vao 1 so N: ");
  scanf("%d", &n);
  do
    {
      s = s*10 + n%10;
      n = n/10;
    }
  while (n != 0);
  printf("Ket qua nghich dao la: %d \n", s);
}
