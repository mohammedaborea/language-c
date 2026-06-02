/* Compter le nombre d'occurrences d'une valeur donnée
   dans un tableau */
#include <stdio.h>
int main()
{
    int n,T[20],x,count=0,i;
    do {
        printf("Entrez la taille du tableau(<=20):\n");
        scanf("%d",&n);
    }
    while (n<=0 || n>20);

    for(i=0;i<n;i++){
        printf("T[%d]=\n",i+1);
        scanf("%d",&T[i]);
    }
    printf("Entrez une valeur pour chercher :\n");
    scanf("%d",&x);
    for(i=0;i<n;i++) {
        if (T[i]==x){
            count++;
        }
    }

    printf("Le nombre d'occurrence de %d est %d \n",x,count);


    return 0;
}
