#include <stdio.h>
/* Vérifier si un nombre est parfait ou non */
int main()
{
    int n,div=0,i;
    printf("Entrez n:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if (n%i==0){
            div=div+i;
        }
    }
    if (div==n){
        printf("%d est parfait\n",n);
    }
    else{
        printf("%d n'est pas parfait\n",n);
    }



    return 0;
}
