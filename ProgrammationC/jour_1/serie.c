#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
  float s=0,i;
  int n;
  printf("Nhap vao so N \n ");
  scanf("%i",&n);

  for (i=1;i<=n;i++)
    {
      s=s+(1/i);
    }
  printf("La somme des %d premiers termes est %f \n",n,s);
}
