/* Supprimer un élément d'un tableau à une position donnée */
#include <stdio.h>

int main()
{
    int n, T[10], i,p,j;

    do
    {
        printf("Donnez la taille du tableau :\n");
        scanf("%d", &n);
    }
    while(n <= 0 || n >= 10);

    for(i = 0; i < n; i++)
    {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }

    do
    {
        printf("Entrez la position :\n");
        scanf("%d", &p);
    }
    while(p < 0 || p > n-1);

    for (i=0;i<n;i++){
        if (i==p){
            for (j=i;j<n;j++){
                T[j]=T[j+1];
                
            }
            n--;
        }
    }
    printf("-----Le tableau apres supression est-----\n");
    for(i=0;i<n;i++){
        printf("T[%d]=%d\n",i+1,T[i]);
    }



    return 0;
}
