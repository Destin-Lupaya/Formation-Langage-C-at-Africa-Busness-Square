#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    void main()
{
struct date /* D�claration d'un type date */
{ int jour; /* 1ere case : entier jour */
int mois; /* 2ieme case : entier mois */
int annee; /* 3ieme case : entier annee */
};
struct date D; /* D du type date contiendra la date saisie */
int an=0,encore=0; /* entier an contiendra l'ann�e ajustee */
/* bool�en encore pour boucle de relance du prog */
do { /* lance la boucle de relance du prog */
clrscr(); /* efface l'�cran */
printf ("\nDate du jour ? "); /* Affiche l'interrogation */
  scanf ("%d/%d/%d",&D.jour,&D.mois,&D.annee); /* r�cup. date saisie par l'utilisateur*/
if (D.mois>8) { /* teste si le mois est post�rieur � aout */
an=D.annee+1; /* si oui, an recoit annee + 1 */
printf ("\n\nAnn�e scolaire : %d-%d",D.annee,an); /*�crit ann�e scol en cours*/
}
else { an=D.annee-1; /* sinon, an recoit annee - 1 */
printf ("\n\nAnn�e scolaire : %d-%d",an,D.annee); /* on ecrit l'ann�e en cours */
}
getch(); /* attente de validation */
printf ("\n\n Voulez vous encore jouer (entrez 1 pour Oui)?"); /* demande si l'on veut
relancer le programme */
scanf ("%d",&encore); /* r�cup�re la r�ponse */
} while (encore==1); /* si la r�ponse est 1, on relance la boucle */
} /* fin *
//  system("PAUSE");	
 /* return 0;
}
