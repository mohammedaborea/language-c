#include <stdio.h>

int main()
{
    float nombre, somme = 0;

    printf("Entrez 4 nombres :\n");

    scanf("%f", &nombre);
    somme += nombre;

    scanf("%f", &nombre);
    somme += nombre;

    scanf("%f", &nombre);
    somme += nombre;

    scanf("%f", &nombre);
    somme += nombre;

    printf("La somme = %.2f\n", somme);

    return 0;
}
