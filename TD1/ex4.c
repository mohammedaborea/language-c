#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float pi=3.14;
    float rayon;
    printf("Entrez le rayon d'un cercle:\n");
    scanf("%f",&rayon);
    float surface_de_cercle=pi*pow(rayon,2);
    printf("La surface est :%2.f\n",surface_de_cercle);

    return 0;
}
