#include <stdio.h>

int main()
{
    int i,j,n;
    do {
        printf("Entrz n:\n");
        scanf("%d",&n);
    }
    while(n<=1);



    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");

        }
        printf("\n");

    }



    return 0;
}
