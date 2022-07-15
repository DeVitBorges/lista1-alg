#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    printf("ex 09\n");
    int camP, camM, camG;
    double valorP, valorM, valorG;
    valorP = 10.00;
    valorM = 12.00;
    valorG = 15.00;

    printf ("\ninforme a quantidade de camisetas compradas, do P ao G: ");
    scanf ("%d %d %d", &camP, &camM, &camG);
    printf ("\no valor da compra foi: %.02f", (camP*valorP+camM*valorM+camG*valorG));
    return 0;
}
