#include <stdio.h>
#include <stdlib.h>

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


/*
int *Minimum(int *tab[], int taille) {
  int *min = tab;
  int i;
  for (i = 0 ; i < taille ; i++) 
    if (*min > *tab[i])
      min = &tab[i];

  return min;
}
/*
void MinMax(int *tab[], int taille, int * max, int * min) {
  max = tab;
  min = tab;
  int i;
  for (i = 1 ; i < taille ; i++) {
    if (*max < *tab[i])
      max = &tab[i];
    if (*min > *tab[i])
      min = &tab[i];

  }
}
*/
int main()
{
  int taille,i;
  int max,min;
  int *tab;
  printf("Entrez la taille ?");
  scanf("%i",&taille);
  saisir(&tab,taille);
  // for(i=0; i<taille; i++)
  // printf("%i\n",tab[i]);
  afficher(&tab,taille);
  //int ptrmin;
  //ptrmin = Minimum(tab,taille);
  //MinMax(tab,taille,max,min);
  //printf("%i\n",Minimum(tab,taille));
  return 0;
}

