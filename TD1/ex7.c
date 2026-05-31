#include <stdio.h>

int main()
{
    float pret;

    printf("Veuillez entrer le montant du prêt :\n");
    scanf("%f", &pret);

    float interet = pret * (12.5 / 100);

    printf("L'interet fixe du prêt est : %.2f DT\n", interet);

    return 0;
}
