#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 0507\n");
    float valor1, v2, v3, v4, v5, media;

    printf ("digite os cinco valores, os separando por um espaco: ");
    scanf ("%f" "%f" "%f" "%f" "%f", &valor1, &v2, &v3, &v4, &v5);
    media = ((valor1+v2+v3+v4+v5)/5);
    printf ("a media eh: %.3f", media);

    return 0;
}
