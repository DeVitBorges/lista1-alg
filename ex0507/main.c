#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 05/07\n");

    float valorAcao;

    printf ("digite o valor da transacao: ");
    scanf ("%f", &valorAcao);
    if (valorAcao > 500000)
         printf ("o valor da comissao eh %f", ((valorAcao*0.0009)+255));
        else if (valorAcao > 50000)
         printf ("o valor da comissao eh %f", ((valorAcao*0.0011)+155));
        else if (valorAcao > 20000)
         printf ("o valor da comissao eh %f", ((valorAcao*0.0022)+100));
        else if (valorAcao > 6250)
         printf ("o valor da comissao eh %f", ((valorAcao*0.0034)+76));
        else if (valorAcao > 2500)
         printf ("o valor da comissao eh %f", ((valorAcao*0.0066)+56));
        else if (valorAcao > 529.42)
         printf ("o valor da comissao eh %f", ((valorAcao*0.017)+30));
        else
         printf ("o valor da comissao eh 39");


    return 0;
}
