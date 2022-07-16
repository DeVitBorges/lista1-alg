#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("ex 15\n");

    int  carlosAndre, aux;
    float conta, felipe;

    printf ("\ndigite o valor da conta: ");
    scanf ("%f", &conta);
    carlosAndre = (conta/3);
    felipe = carlosAndre + fmod(conta,3);
    printf ("\nCarlos e Andre pagam %d cada, Felipe paga %.2f", carlosAndre, felipe);

    return 0;
}
