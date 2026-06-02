/* Saisie et affichage des éléments d'un tableau de 10 entiers */
#include <stdio.h>
int main()
{
    int T[10],i;
    for (i=0;i<10;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    for (i=0;i<10;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }

    return 0;
}
