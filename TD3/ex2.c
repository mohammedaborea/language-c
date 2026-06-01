#include <stdio.h>

int main()
{
    int i,n,comt=0;
    do {
        printf("Entrez n:\n");
        scanf("%d",&n);
    }
    while(n<=0);
    for(i=1;i<=n;i++){
        if (i%3==0){
            comt++;
            printf("%d\n",i);
        }
    }
    printf("le nombres de valeurs divisible par 3 est %d\n",comt);




    return 0;
}
