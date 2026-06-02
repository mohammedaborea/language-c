/* Vérifier si un tableau se lit de la même manière
   de gauche à droite et de droite à gauche */
#include <stdio.h>
int main()
{
    int n,T[20],i,tem=0;
    do {
        printf("Donnez la taille du tableau :\n");
        scanf("%d",&n);
    }
    while (n>20 || n<=0);
    for (i=0;i<n;i++){
        printf("T[%d]\n",i+1);
        scanf ("%d",&T[i]);
    }
    for (i=0;i<n;i++){
        if (T[i]==T[n-1-i]){
            tem++;

        }
    }
    if (tem==n){
        printf("Elle est symetrique \n");
    }
    else {
        printf("Elle n'est pas symetrique \n");
    }


    return 0;
}
