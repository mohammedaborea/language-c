#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Donnez moi la valeur de a:\n");
    scanf("%d",&a);

    printf("Donnez moi la valeur de b:\n");
    scanf("%d",&b);

    float quotient = (float)a / b;
    int rest = a % b;
    int partie_entier = a / b;

    printf("%d/%d = %.2f\n", a, b, quotient);
    printf("Le reste de la division est : %d\n", rest);
    printf("La partie entiere de la division est : %d\n", partie_entier);

    return 0;
}
