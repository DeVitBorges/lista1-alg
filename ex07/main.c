#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 07\n");
    int dia=0, mes=0;

    printf ("\nInforme o dia: ");
    scanf ("%d", &dia);
    printf ("\nInforme o mes: ");
    scanf ("%d", &mes);
    printf ("\nse passaram %d dias desde o inicio do ano", (dia+((mes-1)*30)));

    return 0;
}
