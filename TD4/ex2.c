/* Calcul de la somme des éléments d'un tableau de 10 entiers */
#include <stdio.h>
int main()
{
    int T[10],i,somme=0;
    for (i=0;i<10;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    for (i=0;i<10;i++){
        somme=somme+T[i];
    }
    printf("La somme des elements du tableau est : %d\n", somme);
    return 0;
}
