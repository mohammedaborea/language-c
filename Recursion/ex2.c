/* Calculer le PGCD de deux entiers
   en utilisant la récursivité */
#include <stdio.h>

int pgcd(int x, int y)
{
    if (y == 0)
        return x;

    return pgcd(y, x % y);
}

int main()
{
    int x, y;

    printf("Entrez x : ");
    scanf("%d", &x);

    printf("Entrez y : ");
    scanf("%d", &y);

    printf("PGCD = %d\n", pgcd(x, y));

    return 0;
}
