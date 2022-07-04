#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  void main()
{
int a,b,r=1;
clrscr();
printf ("\n\nValeur de a : ");
scanf ("%d",&a);
printf ("\nValeur de b : ");
scanf ("%d",&b);
r=a%b;
while (r!=0)
{ a=b;
b=r;
r=a%b;
}
printf ("\n\nLe PGCD est : %d",b);
getch();
}
  system("PAUSE");	
  return 0;
}
