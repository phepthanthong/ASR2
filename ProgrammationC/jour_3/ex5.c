#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main ()
{
  char nom[30],prenom[30];
  int numero,i;
  FILE *fichier = fopen ("INFORM.txt","r");
  FILE *fichier1 = fopen ("INFBIS.txt","w");
  
  while (!feof(fichier))
    {
      fscanf(fichier,"%d\t %s\t %s\t\n",&numero,nom,prenom);
      i=numero % 10;
      if (i != 8)
	fprintf(fichier1,"%d\t %s\t %s\t\n",numero,nom,prenom);
    }
  fclose(fichier);
  fclose(fichier1);
  return 0;
}

