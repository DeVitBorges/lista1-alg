#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Ex 05\n");
    float precoGasolina, pagamento;

    printf ("Informe o preco do litro: ");
    scanf ("%f", &precoGasolina);
    printf ("\nInforme seu pagamento: ");
    scanf ("%f", &pagamento);
    float litros = (pagamento/precoGasolina);
    printf ("\nvoce abasteceu %.3f litros", litros );
    return 0;
}
