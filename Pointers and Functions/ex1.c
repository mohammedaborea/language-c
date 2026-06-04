/* Lire trois entiers à l'aide des pointeurs,
   calculer leur somme et afficher le résultat */
#include <stdio.h>
void lecture(int *x,int *y,int *z)
{
    printf("Entrez un entier :\n");
    scanf("%d",x);
    printf("Entrez un entier :\n");
    scanf("%d",y);
    printf("Entrez un entier :\n");
    scanf("%d",z);

}
int somme(int x,int y,int z)
{
    int s;
    s=x+y+z;

    return s;
}

void affichage(int *s)
{
    printf("somme=%d\n",*s);
}



int main()
{
    int x,y,z,s;
    lecture(&x,&y,&z);
    s=somme(x,y,z);
    affichage(&s);

}
