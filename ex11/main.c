/*  Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 11\n");

    int dias, meses, anos, diasTotal;

    printf ("\ninforme a quantidade de dias sem acidentes: ");
    scanf ("%d", &diasTotal);
    printf ("\ndias informados: %d ", diasTotal);

    anos = diasTotal/360;
    diasTotal = diasTotal-(anos*360);
    meses = diasTotal/30;
    diasTotal = diasTotal-(meses*30);
    dias = diasTotal;

    printf ("\nestamos a %d anos, %d meses e %d dias sem acidentes", anos, meses, dias);



    return 0;
}
