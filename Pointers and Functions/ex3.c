/* Supprimer la première occurrence d'une valeur
   dans un tableau en utilisant les pointeurs */
#include <stdio.h>
void Remplir (int *n,int *T)
{
    int i;
    do {
        printf("Entrez la taille de tableau(<=50):\n");
        scanf("%d",n);
    }
    while(*n>50 || *n<=0);
    for (i=0;i<*n;i++){
        printf("T[%d]=\n",i+1);
        scanf("%d",T+i);
    }

}

void Affichage(int *n, int *T)
{
    int i;
    for (i=0;i<*n;i++){
        printf("T[%d]=%d\n",i+1,*(T+i));
    }
}

void supprime(int *T, int *n, int x)
{
    int i, j;

    for(i = 0; i < *n; i++)
    {
        if(*(T + i) == x)
        {
            for(j = i; j < *n - 1; j++)
            {
                *(T + j) = *(T + j + 1);
            }

            (*n)--;

            printf("---- Votre tableau apres suppression est ------\n");
            Affichage(n, T);

            return;
        }
    }

    printf("La valeur n'existe pas!\n");
}



int main ()
{
    int T[50],n,x;
    Remplir(&n,T);
    printf("--------Votre tableau est------\n");
    Affichage(&n,T);
    printf("Entrez un valeur pour suprimer :\n");
    scanf("%d",&x);
    supprime(T,&n,x);
}
