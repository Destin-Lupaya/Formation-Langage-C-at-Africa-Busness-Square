int triple(int nombre)
{
static int resultat = 0; // La variable resultat est créée la
première fois que la fonction est appelée
resultat = 3 * nombre;
return resultat; } // La variable resultat n'est PAS supprimée lorsque la  est terminée.

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
