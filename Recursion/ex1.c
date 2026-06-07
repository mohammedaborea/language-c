/* Afficher les nombres de 0 à 9 en utilisant la récursivité */
#include <stdio.h>
void affichage(int i)
{
    if (i >= 10)
        return;

    printf("%d\n", i);
    affichage(i + 1);
}

int main ()
{
    int i=0;
affichage(i);

}
