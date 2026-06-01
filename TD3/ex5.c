#include <stdio.h>
/* Calcul de e par la série 1 + 1/1! + 1/2! + ... */
int main()
{
    int i;
    double e = 1.0;
    double factorielle = 1.0;
    double terme;

    for(i = 1; ; i++)
    {
        factorielle *= i;
        terme = 1.0 / factorielle;

        if(terme <= 0.0001)
            break;

        e += terme;
    }

    printf("e = %lf\n", e);

    return 0;
}
