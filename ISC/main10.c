#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  void main()
{
struct date
{ int jour;
int mois;
int annee;
};
struct date N,J;
int an,mois,jour,test=0;
clrscr();
printf ("Date de naissance : ");
scanf ("%d/%d/%d",&N.jour,&N.mois,&N.annee);
printf ("\nDate du jour : ");
scanf ("%d/%d/%d",&J.jour,&J.mois,&J.annee);
an=J.annee-N.annee;
if (an>18) test=1;
else { if (an<18) test=0;
else { mois=J.mois-N.mois;
if (mois>0) test=1;
else { if (mois<0) test=0;
else { jour=J.jour-N.jour;
if (jour>=0) { test=1;
if (jour==0) printf ("\n\nBON ANNIVERSAIRE!!!");
}
else test=0;
}
}
}
}
if (test==0) printf ("\n\nVous ˆtes mineur");
else printf ("\n\nVous ˆtes majeur");
getch();
}
  system("PAUSE");	
  return 0;
}
