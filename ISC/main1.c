#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  void main()
{ int i=5,j=2;
float x ;
x=i/j; /* le r�sultat est 2 car i et j sont des entiers ; le r�sultat est donc un entier */
x=(float)i/j; /* le r�sultat est 2.5 car l�op�rateur (float) (prioritaire par rapport � la division) */
/* a transform� le type de la variable i en float ; le r�sultat est donc un float */
x=(float)(i/j); /* le r�sultat est 2 car la division est �valu�e et donne un entier qui est ensuite */
/* transform� en r�el */
}
  system("PAUSE");	
  return 0;
}
