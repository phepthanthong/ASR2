#include <stdlib.h>
#include <stdio.h>
//int fib(int n);
int main ()
{
  int N,n;
  printf("Nhap so N \n");
  scanf("%i",&N);
  for (n=1;n<=N;n++)
  printf("FIBONACCI de %d est %i \n ",n,fib(n));

}

int fib(int n)
{   if (n==0 || n==1)
    return 1;
  else 
    return fib(n-1) +fib(n-2);
}
