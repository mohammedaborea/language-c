#include <stdio.h>

int main()
{
    float R1, R2, R3;

    printf("Entrez R1 : ");
    scanf("%f", &R1);

    printf("Entrez R2 : ");
    scanf("%f", &R2);

    printf("Entrez R3 : ");
    scanf("%f", &R3);

    float Rserie = R1 + R2 + R3;

    float Rparallele = (R1 * R2 * R3) /
                       (R1 * R2 + R1 * R3 + R2 * R3);

    printf("Resistance en serie = %.2f ohms\n", Rserie);
    printf("Resistance en parallele = %.2f ohms\n", Rparallele);

    return 0;
}
