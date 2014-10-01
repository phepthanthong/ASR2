#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  float valeur,nhap,y,x1,y1,x2,y2;
  int i=0, j, k;

  printf("Nhap X: ");
  scanf("%f",&nhap);
  
  FILE *fichier = fopen("Result.txt","r");

  while (fscanf(fichier,"%f",&valeur) == 1)
    {
      i++;
      if (i % 2 == 1)
	{
	  if (valeur == nhap)
	    {
	      j = i+1;
	      continue;
	    }
	  if (valeur < nhap)
	    {
	      x1=valeur;
	      k=1; 
    	    }
	  if (valeur > nhap)
	    {
	      x2=valeur;
	      k=2;continue;
	    }
	}
      if (i==j)
	{
	  y=valeur;
	  break;
	}
      if (k==1)
	y1=valeur;
      if (k==2)
	{
	  y2=valeur;break;
	}
    }
  fclose(fichier);
  printf("i=%d \n",i);
  if (k=2)
    { 
      printf("gia tri cua x1 y1 x2 y2: %f %f %f %f \n",x1,y1,x2,y2);
      y=(((y2-y1)*(nhap-x1))/(x2-x1))+y1;
    }
  
  printf("gia tri cua x va y: %f %f \n", nhap,y);

  // ghi vao file moi
  FILE *fichier1 = fopen("Coordonnees.txt","w");
  fprintf(fichier1,"( %f , %f ) \n", nhap,y);
  return 0;
}
/*
FILE *fichier = fopen("Result.txt","r")
for (i=0;i<100;i++)
fscanf(fichier," %f %f ", &x[i],&y[i]);
fclose(fichier);

for (i=0;i<100;i++)
if (nhap < x[i])
break;

sau do tinh Y
*/
