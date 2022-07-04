#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
//{

void main()
{
float note,notea,i;
clrscr();
printf ("Saisir la note: ");
scanf ("%f",&note);
i=note-(int)note;
notea=(i==0)?note:(i>0.5)?(int)note+1:(int)note+0.5;
printf ("\nLa note arrondie est %f",notea);
getch();
}
  //system("PAUSE");	
  //return 0;
//}
