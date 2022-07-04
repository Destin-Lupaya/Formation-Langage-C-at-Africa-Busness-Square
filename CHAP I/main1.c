#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1;
  int num2;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  
  printf("Answer %d\n", num1 + num2);
  
  
  system("PAUSE");	
  return 0;
}
