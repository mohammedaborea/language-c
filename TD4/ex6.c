/* Inverser les éléments d'un tableau sans utiliser
   un tableau supplémentaire */
#include <stdio.h>
int main()
{
    int n,T[30],i,tem;
    do {
        printf("Donnez la taille du tableau :\n");
        scanf("%d",&n);
    }
    while (n>30 || n<=0);

    for (i=0;i<n;i++){
        printf("T[%d]=\n",i+1);
        scanf("%d",&T[i]);
    }
    printf("----La Tableau avant----\n");
    for (i=0;i<n;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }
    for(i=0; i<n/2; i++){
    tem = T[i];
    T[i] = T[n-1-i];
    T[n-1-i] = tem;
    }

    printf("----La Tableau apres----\n");
    for (i=0;i<n;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }
    return 0;
}
