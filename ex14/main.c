#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 14\n");

    float raioPizza;

    printf ("\ninforme o raio da pizza em cm: ");
    scanf ("%f", &raioPizza);
    printf ("\na area eh: %.2f cm2", (raioPizza * (raioPizza*3.14)));
    return 0;
}
