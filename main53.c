#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le \0
// Initialisation de la cha�ne (on �crit les caract�res un � un en m�moire)
chaine[0] = 'S';
chaine[1] = 'a';
chaine[2] = 'l';
chaine[3] = 'u';
chaine[4] = 't';
chaine[5] = '\0';
// Affichage de la cha�ne gr�ce au %s du printf
printf("%s\n", chaine);
  
  system("PAUSE");	
  return 0;
}
