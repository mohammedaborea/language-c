#include <stdio.h>

int main()
{
    float a, b, c, d, somme;

    printf("Entrez 4 nombres :\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    somme = a + b + c + d;

    printf("La somme = %.2f\n", somme);

    return 0;
}
