#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float arrondi(float note)
{
int notea,i;
i=note-(int)note;
notea=(i==0)?note:(i>0.5)?(int)note+1:(int)note+0.5;
return (notea);
}
int pgcd (int a, int b)
{ int r;
r=a%b;
while (r!=0) {a=b; b=r; r=a%b;}
return (b);
}
void main()
{
int var1,var2,test=1;
float var3;
clrscr();
do
{ clrscr();
printf ("\nSaisir les deux nombres : ");
scanf ("%d %d",&var1,&var2);
printf ("\nle PGCD est %d",pgcd(var1,var2));
getch();
printf ("\nVoulez vous continuer (Non=0)? ");
scanf ("%d",&test);
} while (test!=0);
test=1;do
{ clrscr();
printf ("\Saisir la note : ");
scanf ("%f",&var3);
printf ("\La note arrondie est %f",arrondi(var3));
getch();
printf ("\nVoulez vous continuer (Non=0)? ");
scanf ("%d",&test);
} while (test!=0);
}
  
  system("PAUSE");	
  return 0;
}
