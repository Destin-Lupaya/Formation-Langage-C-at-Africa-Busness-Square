#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 18;
  if (age >= 18) // Si l'�ge est sup�rieur ou �gal � 18
{
printf ("Vous etes majeur !");
}else if ( age > 4 ) // Sinon, si l'�ge est au moins sup�rieur � 4
{
printf ("Bon t'es pas trop jeune quand meme...");
}else // Sinon...
{
printf ("Aga gaa aga gaaa"); // Langage b�b�, vous pouvez pas comprendre
}
  system("PAUSE");	
  return 0;
}
