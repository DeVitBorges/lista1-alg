#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 26\n");

    float n1=0, n2=0, n3=0, valor=0, valortotal;

    printf ("\n insira os tres numeros a serem multiplicados, os separando por espacos: ");
    fflush(stdin);
    scanf ("%f" "%f" "%f", &n1, &n2, &n3);
    valor = n1*n2;
    valortotal = valor*n3;
    printf ("valor da multiplicacao: %.3f", valortotal);
    return 0;
}
