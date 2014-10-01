#include <stdlib.h>
#include <stdio.h>

void saisir(int *p, int n)
{
  int i;
  for (i=0;i<=n;i++)
    {
      printf("p[%d] = ",i);
      scanf("%d",p+i); //&p[i]
    }
}
void afficher(int *p, int n)
{
  printf("Mang da nhap gom: ");
  int i;
  for (i=0;i<=n;i++)
    printf("%d",p[i]);
  printf("\n");
}
int main()
{
  int *p, n;
  printf("Nhap so phan tu cua mang: \n");
  scanf("%d",&n);
  printf("Nhap cac phan tu cua mang \n");
  
  saisir(p,n);
}
