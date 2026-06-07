/* Calculer le coefficient binomial C(n,p)
   en utilisant la récursivité */
#include <stdio.h>

int card (int n, int p)
{
    if (n==p || p==0){
        return 1;
    }
    return card(n-1,p)+card(n-1,p-1);
}

int main ()
{


}
int main()
{
    int n, p;

    printf("n = ");
    scanf("%d", &n);

    printf("p = ");
    scanf("%d", &p);

    printf("C(%d,%d) = %d\n", n, p, card(n,p));

    return 0;
}
