#include <stdio.h>
#include <stdlib.h>

int triple(int nombre)
{
return 3 * nombre;
}
int main(int argc, char *argv[])
{
    int nombreEntre = 0;
    printf("Entrez un nombre... ");
scanf("%d", &nombreEntre);
// Le r�sultat de la fonction est directement envoy� au printf et n'est pas stock� dans une variable
printf("Le triple de ce nombre est %d\n", triple(nombreEntre));
//return 0;
  
  system("PAUSE");	
  return 0;
}
