#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char pluralNoun[20];
    char celebrity[20];
    char color [20];
    
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s", celebrity);
    
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);
  
  system("PAUSE");	
  return 0;
}
