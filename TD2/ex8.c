#include <stdio.h>

int main()
{
    int n;

    printf("Entrez un chiffre entre 1 et 5 : ");
    scanf("%d", &n);

    if (n == 1)
        printf("Un\n");
    else if (n == 2)
        printf("Deux\n");
    else if (n == 3)
        printf("Trois\n");
    else if (n == 4)
        printf("Quatre\n");
    else if (n == 5)
        printf("Cinq\n");
    else
        printf("Erreur : le chiffre doit etre entre 1 et 5.\n");

    return 0;
}
