#include <stdlib.h>
#include <stdio.h>

int main()
{
  int numero;
  char nom[30], prenom[30];
  printf("Entrer le numero de matricule: ");
  scanf("%d",&numero);
  printf("Entrer votre nom: ");
  scanf("%s",&nom);
  printf("Entrer votre prenom: ");
  scanf("%s",&prenom);

  float tmp;
  FILE *fichier = fopen("INFORM.txt","w");
  //verifier l'ouverture du FILE
  if (!fichier)
    {
      printf("\aERREUR: Impossible d'ouvrir \n");
      exit (-1);
    }
  fprintf(fichier,"%d\t %s\t %s\t\n",numero,nom,prenom);
  fclose(fichier);
 
}
