#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
//{
  void main()
{
int a,b,result,B=0,encore=0;
char operateur;
do {
clrscr(); /* efface l'�cran */
printf ("\nop�rande n�1 : "); /* Affiche l'interrogation */
scanf ("%d",&a); /* r�cup�re l'op�rande date saisie par l'utilisateur */
printf ("\nop�rateur (+,*,-) : ");
scanf ("%s",&operateur);
printf ("\nop�rande n�2 : "); /*on demande l'op�rande n�2 */
scanf ("%d",&b);
switch (operateur)
{ case '+': { result=a+b; break; }
case '-': { result=a-b; break; }
case '*': { result=a*b; break; }
default : { printf ("\n\nl'op�rateur saisie n'est pas correct"); B=1;}
}
if (B==0) printf ("\n\nR�sultat : %d",result);
getch(); /* attente de validation */
printf ("\n\n Voulez vous encore jouer (entrez 1 pour Oui)?");
scanf ("%d",&encore); /* on r�cup�re la r�ponse */
} while (encore==1); /* si la r�ponse est 1, on relance la boucle */
} /* fin */
  /*system("PAUSE");	
  return 0;
}
