#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 21\n");

    int lata, garr, garrG;
    float litros;

    printf ("\ndigite o numero de latas, garrafas e garrafas maiores, separando-as por um espaco: ");
    scanf ("%d %d %d", &lata, &garr, &garrG);
    litros = (lata*0.35)+ (garr*0.6)+(garrG*2);
    printf ("\na quantidade de litros foi: %.3f", litros);
    return 0;
}
