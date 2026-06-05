/* Inverser les éléments d'un tableau en utilisant
   les pointeurs et une fonction de permutation */
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

void permuter(int *x, int *y)
{
    int z;

    z = *x;
    *x = *y;
    *y = z;
}

void Inverse(int *n, int *T)
{
    int i;

    for(i = 0; i < *n / 2; i++)
    {
        permuter((T + i),(T + (*n) - 1 - i));
    }
}
int main ()
{
    int T[50],n;
    Remplir(&n,T);
    printf("--Le tableau avant inverse--\n");
    Affichage(&n,T);
    printf("---Le tableau apres invers---- \n");
    Inverse(&n,T);
    Affichage(&n,T);




}
