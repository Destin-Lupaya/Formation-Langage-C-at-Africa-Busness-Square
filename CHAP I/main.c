#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int name [20];
  printf("Enter your name: ");
  fgets(name, 20, stdin);
  printf ("Your name is %s", name);
  
   
  system("PAUSE");	
  return 0;
}
