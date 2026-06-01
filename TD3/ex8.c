#include <stdio.h>
/* Calcul du PGCD de deux entiers par l'algorithme d'Euclide */

int main()
{
    int x,y,rest;
    printf("Entrez x:\n");
    scanf("%d",&x);
    printf("Entrez y:\n");
    scanf("%d",&y);
    if(x == 0 && y == 0)
        {
    printf("PGCD indefini\n");
    return 0;
    }
    while(y != 0){
        rest= x % y;
        x=y;
        y=rest;
    }
    printf("PGCD=%d\n",x);

    return 0;
}
