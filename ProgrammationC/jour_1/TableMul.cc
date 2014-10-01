#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i;
  printf("\t");
  for (i=1;i<10;i++)
    {
      printf("%i\t",i);
    }
  printf("\n");
  int j;
  for (i=1;i<10;i++)
    {
      printf("%i\t",i);
      for (j=1;j<10;j++)
	{
	  printf("%i\t",j*i);
	}
      printf("\n");
    }
}

  
