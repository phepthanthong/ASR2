#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n,i,X,P=0;
  printf("Nhap gia tri n: \n");
  scanf("%i",&n);
  int A[n];
  
  for (i=0;i<=n;i++)
    {
      printf("Nhap A%i vao ",i);
      scanf("%i",&A[i]);
    }
  printf("Nhap X vao ");
  scanf("%i",&X);

  for (i=0;i<=n;i++)
    P += A[i] * pow(X,i);
  printf("P(X) = %i \n",P);

  return 0;
}
