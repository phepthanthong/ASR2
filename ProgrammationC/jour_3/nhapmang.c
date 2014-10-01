#include "stdio.h"
#include "stdlib.h"
/*
void NhapMang(int *a, int n)
{
  int i;
  for (i=0;i<n;i++)
    {
      printf("Nhap a[%d]: ",(i + 1));
      scanf("%d",&a[i]);
    }
}

void Xuat(int *a, int n)
{
  int i;
  printf("Mang vua nhap: \n");
  for (i=0;i<n;i++)
    printf("a[%d] = %d\n",i,a[i]);
}
void NhapN(int *n)
{
  printf("Nhap so phan tu: ");
  scanf("%d",n);
}
int main()
{
  int *a, n = 1;
  a = (int*)malloc(n * sizeof(int)); // Ban co the dung: a = new int[n]; (Trong C++)
  
  NhapN(&n);
  NhapMang(a,n);
  Xuat(a,n);
  return 0;
}

*/
void saisir (int *t, int n)
{
  int i;
  printf("entrer votre tableau: ");
  for (i=0;i<n;i++)
  scanf("%d",t+i);
}
void afficher( int *t, int n)
{
  int i;
  printf("Votre tableau: ");
  for (i=0;i<n;i++)
    printf("%d", *(t+i));
  printf("\n");
}
int main()
{
  int *tab = (int *) malloc (sizeof(int)*2);
  
  int taille;
  printf("Votre taille: ");
  scanf ("%d",&taille);
  saisir(tab,taille);
  afficher(tab, taille);
  //free(tab);
  return EXIT_SUCCESS;
}
