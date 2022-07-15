#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ex 06\n");

    float valorQuilo, pesoTotal, pesoPrato;
    valorQuilo = 12;

    printf ("\npeso em quilos: ");
    scanf ("%f", &pesoTotal);
    printf ("\npeso prato: ");
    scanf ("%f", &pesoPrato);
    printf ("\nvalor do prato: %.2f",((pesoTotal-pesoPrato)*valorQuilo));


    return 0;
}
