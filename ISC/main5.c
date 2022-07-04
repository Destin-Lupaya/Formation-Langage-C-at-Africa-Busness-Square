#include <stdio.h>
/*#include <stdlib.h>

int main(int argc, char *argv[])
{*/
    void main()
{
struct horaire /* Déclaration d'un type date */
{ int heure; /* 1ere case : entier jour */
int minute; /* 2ieme case : entier mois */
};
struct horaire H1,H2,H3; /* D du type date contiendra la date saisie */
int encore=0;
do {
clrscr(); /* efface l'écran */
printf ("\nhoraire nø1 : "); /* Affiche l'interrogation */
scanf ("%d:%d",&H1.heure,&H1.minute); /* récupère la date saisie par l'utilisateur */
printf ("\n\nhoraire nø2 : "); /*on écrit l'année scolaire en cours */
scanf ("%d:%d",&H2.heure,&H2.minute);
H3.heure=H1.heure+H2.heure;
H3.minute=H1.minute+H2.minute;
if (H3.minute>=60) { H3.minute-=60;
H3.heure++;
}
if (H3.heure>=24) H3.heure-=24;
printf ("\n\nSomme des horaires : %d:%d",H3.heure,H3.minute);
getch(); /* attente de validation */
printf ("\n\n Voulez vous encore jouer (entrez 1 pour Oui)?");
scanf ("%d",&encore); /* récupère la réponse */
} while (encore==1); /* si la réponse est 1, on relance la boucle */
} /* fin */
  
 /* system("PAUSE");	
  return 0;*/
}
