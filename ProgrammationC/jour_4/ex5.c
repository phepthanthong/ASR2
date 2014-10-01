#include <stdlib.h>
#include <stdio.h>

int main ()
{
  
  int tmp;
  FILE *fichier = fopen ("INFORM.TXT","r");
  FILE *fichier1 = fopen ("INFBIS.TXT","w");
  while (fscanf(fichier,"%d\t %s\t %s\t\n",&tmp)==1)
    {
      if (numero % 10 != 8)
	fprintf(fichier1,"%d",tmp);
    }
  fclose(fichier);
  fclose(fichier1);
  return 0;
}
  
