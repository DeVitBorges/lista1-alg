#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 40\n");

    float catetoO, catetoA;

    printf ("\nsendo um triangulo retangulo, informe o cateto oposto ao angulo observado: ");
    scanf ("%f", &catetoO);
    printf ("\ninforme o cateto adjacente ao angulo: ");
    scanf ("%f", &catetoA);
    printf ("\nmedida da hipotenusa: %.3f\n", sqrt(pow(catetoO,2)+ pow(catetoA,2)));
    return 0;
}
