#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Entrez la valeur de a:\n");
    scanf("%d",&a);
    printf("Entrez la valeur de b:\n");
    scanf("%d",&b);
    printf("Entrez la valeur de c:\n");
    scanf("%d",&c);
    int max = a;
    int min = a;
    
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    
    if (b < min)
        min = b;
    
    if (c < min)
        min = c;
    
    printf("La plus grande est :%d\n",max);
    printf("La plus petite est :%d\n",min);


    return 0;
}
