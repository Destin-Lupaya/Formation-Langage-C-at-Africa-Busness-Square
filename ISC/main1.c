#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  void main()
{ int i=5,j=2;
float x ;
x=i/j; /* le résultat est 2 car i et j sont des entiers ; le résultat est donc un entier */
x=(float)i/j; /* le résultat est 2.5 car l’opérateur (float) (prioritaire par rapport à la division) */
/* a transformé le type de la variable i en float ; le résultat est donc un float */
x=(float)(i/j); /* le résultat est 2 car la division est évaluée et donne un entier qui est ensuite */
/* transformé en réel */
}
  system("PAUSE");	
  return 0;
}
