int triple(int nombre)
{
static int resultat = 0; // La variable resultat est cr��e la
premi�re fois que la fonction est appel�e
resultat = 3 * nombre;
return resultat; } // La variable resultat n'est PAS supprim�e lorsque la  est termin�e.

int incremente();
int main(int argc, char *argv[])
{
printf("%d\n", incremente());
printf("%d\n", incremente());
printf("%d\n", incremente());
printf("%d\n", incremente());
return 0;
} i
nt incremente()
{
static int nombre = 0;
nombre++;
return nombre;
}
