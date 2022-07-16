#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 19\n");

    float chipID, chipAL, frango, gasto;

    printf ("\ninforme o numero de frangos a serem marcados: ");
    scanf ("%f", &frango);
    chipID = frango*4;
    chipAL = frango*2*3.5;
    gasto = chipAL+chipID;
    printf ("\no gasto total foi: %.2f ", gasto);

    return 0;
}
