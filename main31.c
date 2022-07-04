#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    const int MAX = 100, MIN = 1;
  srand(time(NULL));
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
  system("PAUSE");	
  return 0;
}
