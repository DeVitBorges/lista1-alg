#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("ex 10\n");
    float aCordX, aCordY, bCordX, bCordY, resultado;

    printf ("informe as coordenadas de a: \n \n");
    scanf ("%f %f", &aCordX, &aCordY);
    printf ("\ninforme as coordenadas de b: \n \n");
    scanf ("%f %f", &bCordX, &bCordY);
    resultado = sqrt(pow(aCordX-bCordX, 2) + pow(aCordY-bCordY, 2));

    printf ("\na distancia dos pontos eh: %f", resultado);

    return 0;
}
