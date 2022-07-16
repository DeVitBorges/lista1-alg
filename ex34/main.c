#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("ex 34\n");

    float lado;

    printf ("\ninforme o lado do quadrado: ");
    scanf ("%f", &lado);
    printf ("\narea do quadrado: %.3f\n", pow(lado,2));

    return 0;
}
