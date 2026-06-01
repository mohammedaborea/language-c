#include <stdio.h>

int main()
{
    int i,n,somme=0;
    printf("Entrez n:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        somme=somme+i;
    }
    printf("%d",somme);

    return 0;
}
