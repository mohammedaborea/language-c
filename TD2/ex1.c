#include <stdio.h>

int main()
{
    int a;
    printf("Entrz un nombre:\n");
    scanf("%d",&a);
    if (a%3==0){
        printf("%d est divisible par 3\n",3);
    }
    else {
        printf("%d n'est pas divisible par 3\n",a);
    }
    return 0;
}
