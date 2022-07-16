#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("ex 24\n");

    int agua, suco, refresco;

    printf ("\ninforme quantos litros de refresco voce quer: ");
    scanf ("%d", &refresco);
    agua = refresco*8;
    suco = refresco*2;
    printf ("\nvoce precisa de %d litros de agua e de %d litros de suco para fazer essa quantidade de refresco: ", agua, suco);

    return 0;
}
