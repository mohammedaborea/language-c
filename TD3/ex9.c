#include <stdio.h>
/* Vérifier si deux nombres sont amis */

int main()
{
    int m,n,som_m=0,som_n=0,i,j;
    do {
        printf("m=");
        scanf("%d",&m);
        printf("\n");
    }
    while (m<0);
    do {
        printf("n=");
        scanf("%d",&n);
        printf("\n");
    }
    while (n<0);

    for(i=1;i<m;i++) {
        if (m%i==0){
            som_m=som_m+i;
        }
    }
    for(j=1;j<n;j++) {
        if (n%j==0){
            som_n=som_n+j;
        }
    }
    if (som_m==n && som_n==m){
        printf("%d et %d sont amis \n",m,n);
    }
    else {
        printf("%d et %d ne sont pas amis \n",m,n);
            }


    return 0;
}
