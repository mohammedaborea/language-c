  /* Rechercher une valeur dans un tableau puis trier
   les éléments par ordre croissant avec le tri par sélection */
#include <stdio.h>

int main()
{
    int n, T[30], i, j, x, trouve = 0, tem = 0;

    do
    {
        printf("Donnez la taille du tableau :\n");
        scanf("%d", &n);
    }
    while(n <= 0 || n >= 30);

    for(i = 0; i < n; i++)
    {
        printf("T[%d]=\n", i + 1);
        scanf("%d", &T[i]);
    }

    printf("---Votre Tableau---\n");

    for(i = 0; i < n; i++)
    {
        printf("T[%d]=%d\n", i + 1, T[i]);
    }

    printf("Donnez une valeur :\n");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(T[i] == x)
        {
            printf("%d existe dans la position %d\n", x, i + 1);
            trouve++;
        }
    }

    if(trouve == 0)
    {
        printf("%d n'existe pas dans le tableau\n", x);
    }

    printf("-----Le tableau trie par selection-----\n");

    for(i = 0; i < n - 1; i++)
    {
        int min = i;

        for(j = i + 1; j < n; j++)
        {
            if(T[j] < T[min])
            {
                min = j;
            }
        }

        tem = T[i];
        T[i] = T[min];
        T[min] = tem;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }

    printf("\n");

    return 0;
}
