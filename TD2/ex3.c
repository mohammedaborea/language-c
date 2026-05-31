#include <stdio.h>

int main()
{
    int annee;
    printf("Entrz l'annee:\n");
    scanf("%d",&annee);
    if ((annee%400==0) || (annee%4==0 && annee%100!=0)){
        printf("%d est bissextile",annee);
    }
    else {
        printf("%d n'est pas bissextile",annee);
    }



    return 0;
}
