#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 32\n");

    float peso;

    printf ("\ninforme seu peso em quilos: ");
    scanf ("%f", &peso);
    printf ("\nseu peso em gramas: %.fg\n", peso*1000);
    return 0;
}
