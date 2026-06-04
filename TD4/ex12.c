/* Afficher les éléments situés entre deux valeurs données
   dans un tableau */
#include <stdio.h>

int main()
{
    int T[50], i, j, n, k, p, s;

    do
    {
        printf("Entrez la taille de le tableau:\n");
        scanf("%d", &n);
    }
    while (n < 5 || n > 50);

    for(i = 0; i < n; i++)
    {
        printf("T[%d]=\n", i + 1);
        scanf("%d", &T[i]);
    }

    printf("----Votre Tableau----\n");

    for(i = 0; i < n; i++)
    {
        printf("T[%d]=%d\n", i + 1, T[i]);
    }

    do
    {
        printf("Entrez p :\n");
        scanf("%d", &p);
    }
    while (p <= 0);

    do
    {
        printf("Entrez s :\n");
        scanf("%d", &s);
    }
    while (s <= 0);

    for(i = 0; i < n; i++)
    {
        if(T[i] == p)
        {
            for(j = i + 1; j < n; j++)
            {
                if(T[j] == s)
                {
                    printf("--------\n");

                    for(k = i + 1; k < j; k++)
                    {
                        printf("T[%d]=%d\n", k + 1, T[k]);
                    }

                    break;
                }
            }
        }
    }

    return 0;
}
