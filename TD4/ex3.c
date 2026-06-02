/* Vérifier si la somme de la première moitié du tableau
   est égale à la somme de la deuxième moitié */

#include <stdio.h>
int main()
{
    int n,T[20],i,somm_1_mot=0,som_2_mot=0;
    do {
        printf ("Entrez n :\n");
        scanf("%d",&n);
    }
    while(n<=0 || n>20);

    for (i=0;i<n;i++){
        printf("T[%d]=\n",i+1);
        scanf("%d",&T[i]);
    }
    for (i=0;i<(n/2);i++){
        somm_1_mot=somm_1_mot+T[i];
    }
    for(i=n/2;i<n;i++){
        som_2_mot=som_2_mot+T[i];
    }
    if (somm_1_mot==som_2_mot){
        printf("Elle est parfaite\n");
    }
    else{
        printf("Elle n'est pas parfaite\n");
    }

    return 0;
}
