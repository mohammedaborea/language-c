#include <stdio.h>

int main()
{
    int a;
    do {
        printf("Entrez un nombre:\n");
        scanf("%d",&a);
    }
    while(a>999);
    int unite=a % 10;
    int dizaine=(a/10) % 10;
    int cenain=(a / 100) % 10;
    printf("l'unte de %d est %d\n",a,unite);
    printf("le dizaine de %d est %d\n",a,dizaine);
    printf("le centaine de %d est %d \n",a,cenain);
    return 0;
}
