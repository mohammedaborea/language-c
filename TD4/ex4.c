/* Séparer les nombres positifs et négatifs d'un tableau
dans deux tableaux distincts */
#include <stdio.h>
int main()
{
    int T[10],i,TN[10],TP[10],p=0,n=0;
    for (i=0;i<10;i++){
        printf ("T[%d]=\n",i+1);
        scanf("%d",&T[i]);
    }
    for (i=0;i<10;i++){
        if (T[i]>=0){
            TP[p]=T[i];
            p++;
        }
        else{
            TN[n]=T[i];
            n++;
        }
    }
    printf("----Tableau Positive-----\n");
    for (i=0;i<p;i++){
        printf("TP[%d]=%d\n",i+1,TP[i]);
    }
    printf("----Tableau Negative-----\n");
    for (i=0;i<n;i++){
        printf("TN[%d]=%d\n",i+1,TN[i]);
    }


    return 0;
}
