#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex16\n");
    int sand;
    float quei, pres, hamb;

    printf ("\ninforme o numero de sanduiches: ");
    scanf ("%d", &sand);
     quei = 0.05*2*sand;
    printf ("\npeso de queijo: %.3f kg", quei);
    pres = 0.05*sand;
     printf ("\npeso de presunto: %.3f kg", pres);
      hamb = 0.1*sand;
      printf ("\npeso de hamburguer: %.3f kg", hamb);


    return 0;
}
