#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 30\n");

    float salFixo, vendas, comissao;

    printf ("\ninsira seu salario fixo: ");
    scanf ("%f", &salFixo);
    printf ("\ninsira suas vendas: ");
    scanf ("%f", &vendas);
    comissao = vendas*0.04;
    printf ("\nsua comissao: R$%.2f", comissao);
    printf ("\n\nseu salario total: R$%.2f\n", comissao+salFixo);

    return 0;
}
