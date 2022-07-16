#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 31\n");

    float peso;

    printf ("\ninforme seu peso atual: ");
    scanf ("%f", &peso);
    printf ("\nse voce engordar, seu peso sera: %.3f\n", peso*1.15);
    printf ("\nse voce emagrescer, seu peso sera: %.3f\n", peso*0.8);
    return 0;
}
