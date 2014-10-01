#include <stdlib.h>
#include <stdio.h>
void echanger(int tab[], int x, int y)
{
  int tmp;
  tmp = tab[x];
  tab[x] = tab[y];
  tab[y] = tmp;
}
int max(int tab[], int taille)
{
  int i=0,indice_max= 0;
  while (i<taille)
    {
      if (tab[i]>tab[indice_max])
	indice_max = i;
      i++;
    }
  return indice_max;
}
void tri_selection(int tab[], int taille)
{
  int indice_max;
  for (;taille> 1;taille--)
    {
      indice_max = max(tab,taille);
      echanger(tab,taille-1,indice_max);
    }
}
void saisir(int **t, int taille){
  int i;
  printf("Entre le tableau ?");
  for (i=0; i<taille; i++)
    scanf("%i",&t[i]);
}
void afficher(int *t, int taille){
  int i;
  printf("{");
  for(i=0; i< taille;i++)
    printf("%i ",t[i]);
  printf("}\n");
}
int main(){
  int nb_entiers;
  int *tab, i;
  printf("Nhap taille cua bang: \n");
  scanf("%d",&nb_entiers);
  saisir(&tab,taille);  
  tri_selection(tab,nb_entiers);
  afficher(&tab,taille);
}
  
