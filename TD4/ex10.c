/* Supprimer les éléments dupliqués d'un tableau */
#include <stdio.h>
int main()
{
    int n, T[30], i,j,k=0;

    do
    {
        printf("Donnez la taille du tableau :\n");
        scanf("%d", &n);
    }
    while(n <= 0 || n >= 30);

    for (i=0;i<n;i++){
        printf("T[%d]=\n",i+1);
        scanf("%d",&T[i]);
    }
    printf("---Votre Tableau---\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (T[i]==T[j]){
                T[j]=0;
            }
        }

    }

    for(i=0;i<n;i++){
        if (T[i] != 0){
            T[k]=T[i];
            k++;
        }
    }
    n=k;

    printf("----Le tableau apres supprresion est------\n");

    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }
    return 0;
