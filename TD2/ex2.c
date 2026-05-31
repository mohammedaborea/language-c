#include <stdio.h>

int main()
{
    float a,v_abs;
    printf("Entrz un nombre:\n");
    scanf("%f",&a);
    if (a<0){
        v_abs=-1*a;
        printf("La valeur absolue de %.2f est %.2f\n",a,v_abs);

    }
    else if (a==0){
        v_abs=0;
        printf("La valeur absolue de %.2f est %.2f\n",a,v_abs);

    }
    else
    printf("La valeur absolue de %.2f est %.2f\n",a,a);


    return 0;
}
