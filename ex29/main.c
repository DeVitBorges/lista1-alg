#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 29\n");

    float preco;

    printf ("\ninsira o valor do produto: ");
    scanf ("%f", &preco);
    printf ("\npreco com desconto: R$%.2f\n", preco*0.9);
    return 0;
}
