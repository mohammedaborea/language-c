/* Insérer une valeur dans un tableau à une position donnée */

#include <stdio.h>

int main()
{
    int n, T[10], i, x, a;

    do
    {
        printf("Donnez la taille du tableau :\n");
        scanf("%d", &n);
    }
    while(n <= 0 || n >= 10);

    for(i = 0; i < n; i++)
    {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Entrez la valeur a inserer :\n");
    scanf("%d", &x);

    do
    {
        printf("Entrez la position :\n");
        scanf("%d", &a);
    }
    while(a < 0 || a > n);

    for(i = n; i > a; i--)
    {
        T[i] = T[i - 1];
    }

    T[a] = x;
    n++;

    printf("----- Tableau apres insertion -----\n");

    for(i = 0; i < n; i++)
    {
        printf("T[%d] = %d\n", i + 1, T[i]);
    }

    return 0;
}
