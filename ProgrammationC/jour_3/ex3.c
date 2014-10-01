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

  FILE *fichier = fopen ("INFORM.txt","w");
  //verifier l'ouverture du FILE
  if (!fichier)
    {
      printf("\aERREUR: Impossible d'ouvrir \n");
      exit (-1);
    }
  FILE *fichier1 = fopen ("INFBIS.txt","a+");
  if (!fichier)
    {
      printf("\aERREUR: Impossible d'ouvrir \n");
      exit (-1);
    }
  while (!feof(fichier))
    {
      fscanf(fichier,"%d\t %s\t %s\t\n",&numero,nom,prenom);
      fprintf(fichier1,"%d\t %s\t %s\t\n",numero,nom,prenom);
    }
  fclose(fichier);
  fclose(fichier1);
}
