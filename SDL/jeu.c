#include <stdlib.h>
#include <stdio.h>
#include "jeu.h"
void jouer(SDL_Surface* ecran)
{/
/ .../*
jeu.h
-----
Par mateo21, pour Le Site du Z�ro (www.siteduzero.com)
R�le : prototypes des fonctions du jeu.
*/
void jouer(SDL_Surface* ecran);
void deplacerJoueur(int carte[][NB_BLOCS_HAUTEUR], SDL_Rect
*pos, int direction);
void deplacerCaisse(int *premiereCase, int *secondeCase);

int triple(int nombre)
{
int resultat = 0; // La variable resultat est cr��e en m�moire
resultat = 3 * nombre;
return resultat;
} // La fonction est termin�e, la variable resultat est supprim�e de la m�moire

int triple(int nombre);
int main(int argc, char *argv[])
{
printf("Le triple de 15 est %d\n", triple(15));
printf("Le triple de 15 est %d", resultat); // Erreur
return 0;
} i
nt triple(int nombre)
{
int resultat = 0;
resultat = 3 * nombre;
return resultat;
}
