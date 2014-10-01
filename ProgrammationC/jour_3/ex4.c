#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
  int numero;
  char nom[30], prenom[30];
  printf("Entrer le numero de matricule: ");
  scanf("%d",&numero);
  printf("Entrer votre nom: ");
  scanf("%s",nom);
  printf("Entrer votre prenom: ");
  scanf("%s",prenom);
  FILE *fichier = fopen("INFORM.txt","r+");
  //verifier l'ouverture du FILE
  if (!fichier)
    {
      printf("\aERREUR: Impossible d'ouvrir \n");
      exit (-1);
    }
  FILE *fichier1 = fopen("INFBIS.txt","w+");
  //verifier l'ouverture du FILE
  if (!fichier)
    {
      printf("\aERREUR: Impossible d'ouvrir \n");
      exit (-1);
    }
  
  int trouver=0;
  int my_numero;
  char my_nom[30],my_prenom[30];
  while(!feof(fichier))
    {
      fscanf(fichier,"%d\t %s\t %s\t\n",&my_numero,my_nom,my_prenom);
      if (strcmp(nom,my_nom)<=0)
	trouver++;
      if (trouver==1)
	{
	  //trouver=1;
	  fprintf(fichier1,"%d\t %s\t %s\t\n",numero,nom,prenom);
	  fprintf(fichier1,"%d\t %s\t %s\t\n",my_numero,my_nom,my_prenom);
	}
      else
	fprintf(fichier1,"%d\t %s\t %s\t\n",my_numero,my_nom,my_prenom);
    }
  if (trouver==0)
    fprintf(fichier1,"%d\t %s\t %s\t\n",numero,nom,prenom);
  fclose(fichier);
  fclose(fichier1);
}
