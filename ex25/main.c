#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 25");

    float raio, altura, volume;

    printf ("\ninforme o raio da caixa: ");
    scanf ("%f", &raio);
    printf ("\ninforme a altura da caixa: ");
    scanf ("%f", &altura);
    volume = (raio*raio*altura*3.14);
    printf ("\nvolume da caixa: %.3f", volume);
    return 0;

}
