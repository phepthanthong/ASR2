#include <stdlib.h>
#include <stdio.h>

void sqr(int a, int b)
{
  printf("Dia chi cua x va y truoc ham 1 : %p %p \n ", &a,&b);
  b=a*a;
  printf("Binh phuong cua %d la %i \n ",a,b);
  printf("Dia chi cua x va y sau ham 1: %p %p \n ", &a,&b);
}
void sqr1(int a, int *b)
{
  printf("Dia chi cua x va y truoc ham 2 : %p %p \n ", &a,b);
  *b = a*a;
  printf("Binh phuong cua %i la %i \n",a,*b);
  printf("Dia chi cua x va y sau ham 2: %p %p \n ", &a,b);
}
int main()
{
  int x=5,y;
  printf("Dia chi cua x va y : %p %p \n ", &x,&y); 
  sqr(x,y);
  printf("Dia chi cua x va y : %p %p \n ", &x,&y); 
  sqr1(x,&y);
  printf("Dia chi cua x va y : %p %p \n ", &x,&y);
  return 0;
}
