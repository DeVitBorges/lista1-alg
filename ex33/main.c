#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 33\n");

    float lado1, lado2, altura;
    printf ("\ninforme o  tamanho dos lados, separados por um espaco: ");
    scanf ("%f" "%f", &lado1, &lado2);
    printf ("\ninforme a altura: ");
    scanf ("%f", &altura);
    printf ("\na area do trapezio: %.2f\n", ((altura*lado1*lado2)/2));
    return 0;
}
