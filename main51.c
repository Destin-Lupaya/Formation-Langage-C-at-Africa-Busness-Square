#include <stdio.h>
#include <stdlib.h>

{void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);
int main(int argc, char *argv[])

{
int heures = 0, minutes = 90;
// On envoie l'adresse de heures et minutes
decoupeMinutes(&heures, &minutes);
// Cette fois, les valeurs ont �t� modifi�es !
printf("%d heures et %d minutes", heures, minutes);
return 0;
} void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
/* Attention � ne pas oublier de mettre une �toile devant le
nom
des pointeurs ! Comme �a, vous pouvez modifier la valeur des
variables,
et non leur adresse ! Vous ne voudriez pas diviser des adresses,
n'est-ce pas ? ;o) */
*pointeurHeures = *pointeurMinutes / 60;
*pointeurMinutes = *pointeurMinutes % 60;
}
  
  system("PAUSE");	
  return 0;
}
