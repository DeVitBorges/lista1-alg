#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 38\n");

    int anoNas, anoAtual, anos;

    printf ("\ninforme o ano de nascimento: ");
    scanf ("%d", &anoNas);
    printf ("\ninforme o ano atual: ");
    scanf ("%d", &anoAtual);
    anos = anoAtual - anoNas;
    printf ("\nquantidade de anos = %d\n", anos);
    printf ("\nquantidade de meses = %d\n", anos*12);
    printf ("\nquantidade de semanas = %d\n", anos*52);
    printf ("\nquantidade de dias = %d\n", anos*365);

    return 0;
}
