#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 23\n");

    float sombraPredio, suaAltura, suaSombra, predio;

    printf ("\ninsira o tamanho da sombra do predio em metros: ");
    scanf ("%f", &sombraPredio);
    printf ("\ninsira sua altura: ");
    scanf ("%f", &suaAltura);
    printf ("\ninsira o tamanho da sua sombra: ");
    scanf ("%f", &suaSombra);
    predio = ((sombraPredio*suaAltura)/suaSombra);
    printf ("\naltura do predio:%.2f ", predio);

    return 0;
}
