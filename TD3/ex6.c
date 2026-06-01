#include <stdio.h>
/* Vérifier si un nombre est premier ou non */
int main()
{
    int n, i;

    printf("Entrez n:\n");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("%d n'est pas premier\n", n);
            return 0;
        }
    }

    printf("%d est premier\n", n);

    return 0;
}
