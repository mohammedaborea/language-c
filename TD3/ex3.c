#include <stdio.h>

int main()
{
    int n,i,fact=1;
    do {
        printf("Entrez n:\n");
        scanf("%d",&n);
        
    }
    while (n<0);
    
    if (n==0){
        printf("La factorielle de %d est 1\n",n);
    }
    else{
        for (i=1;i<=n;i++){
            fact=fact*i;
        }
    printf("La factorielle de %d est %d\n",n,fact);
    }





    return 0;
}
