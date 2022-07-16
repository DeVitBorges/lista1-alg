#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 13\n");

    int numeroInt;
    int centena, dezena, unidade, aux;


    printf ("\ndigite um numero inteiro de ate tres digitos: ");
    scanf ("%d", &numeroInt);
    centena = (numeroInt/100);
    aux = (numeroInt/10);
    dezena = aux%10;
    aux = (numeroInt);
    unidade = aux%10;
    printf ("\na centena eh: %d ", centena);
    printf("\na dezena eh: %d", dezena);
     printf("\na unidade eh: %d", unidade);

    return 0;
}
