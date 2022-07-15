#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("ex 01\n");
    float Largura, Profundidade;
    printf ("Digite a largura e a profundidade do terreno, as separando por um espaco: \n");
    scanf ("%f %f", &Largura, &Profundidade);
    printf ("area do terreno: %.2f \n", Largura*Profundidade);
    return 0;
}
