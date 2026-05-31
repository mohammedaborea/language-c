#include <stdio.h>

int main()
{
    int binaire,decimal;
    printf("Entrez le nombre en binaire trois bits 000 :\n");
    scanf("%d",&binaire);
    int unite=binaire%10;
    int dizaine = (binaire / 10) % 10;
    int centaine = (binaire / 100) % 10;
    decimal=((unite*1)+(dizaine*2)+(centaine*4));
    printf("Le nombre decimal est :%d\n",decimal);
    return 0;
}
