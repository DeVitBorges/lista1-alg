#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 03\n");
    float paozinho, broa;
    paozinho = 0.12;
    broa = 1.50;

    //valores colocados acima para a mudanca ser mais facil

    int quantidadePaozinho, quantidadeBroa;

    printf ("\nDigite a quantidade de paes, e logo apos a de broas: ");
    scanf ("%d %d", &quantidadePaozinho, &quantidadeBroa);
    printf ("\ntotal arrecadado: %.2f", (float)quantidadePaozinho*paozinho+(float)quantidadeBroa*broa);
    float resultadoDia = quantidadePaozinho*paozinho+quantidadeBroa*broa;
    printf ("\nPoupanca: %.2f", resultadoDia*0.10);
    return 0;
}
