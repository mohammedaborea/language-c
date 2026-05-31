#include <stdio.h>

int main()
{
    char lettre;

    printf("Entrez une lettre : ");
    scanf("%c", &lettre);

    int ascii = lettre;

    if (ascii >= 65 && ascii <= 90)
    {
        printf("%c est une majuscule.\n", lettre);
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        printf("%c est une minuscule.\n", lettre);
    }
    else if (ascii >= 48 && ascii <= 57)
    {
        printf("%c est un chiffre.\n", lettre);
    }
    else
    {
        printf("%c est un caractere special.\n", lettre);
    }

    return 0;
}
