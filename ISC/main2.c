#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  void main()
{
float surface, perimetre, longueur, largeur;
clrscr();
printf ("Saisir la longueur: ");
scanf ("%f",&longueur);
printf ("\nSaisir la largeur: ");
scanf ("%f",&largeur);
perimetre=2*(longueur+largeur);
surface=longueur*largeur;
printf("\n\nle p‚rimŠtre est %f et la surface est %f",perimetre,surface);
getch();
}
  system("PAUSE");	
  return 0;
}
