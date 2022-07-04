#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char prenom[100];
printf("Comment t'appelles-tu petit Zero ? ");
scanf("%s", prenom);
printf("Salut %s, je suis heureux de te rencontrer !", prenom);
  
  system("PAUSE");	
  return 0;
}
