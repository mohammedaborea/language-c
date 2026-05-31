#include <stdio.h>

int main()
{
    int a;
    printf("Entrez un nombre:\n");
    scanf("%d",&a);
    int unite_et_diziane=a % 100;
    if (unite_et_diziane%4==0){
        printf("%d est divisible par 4",a);
    }
    else {
        printf("%d n'est pas divisible par 4");
    }
    return 0;
}
