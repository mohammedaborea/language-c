#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Donnez moi la valeur de a: \n");
    scanf("%d",&a);
    printf("Donnez moi la valeur de b: \n");
    scanf("%d",&b);
    int somme=a+b;
    int produit=a*b;
    float moyenne=produit/2;
    printf("%d+%d=%d\n",a,b,somme);
    printf("%d*%d=%d\n",a,b,produit);
    printf("Moyenne=%.2f\n",moyenne);

    return 0;
}
