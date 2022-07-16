#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 28\n");

    float nota1, nota2, media;

    printf ("\ninsira a nota da primeira materia: ");
    scanf ("%f", &nota1);
    printf ("\ninsira a nota da segunda materia: ");
    scanf ("%f", &nota2);
    media = ((nota1*2)+(nota2*3))/5;
    printf ("\nsua media: %.1f", media);
    return 0;
}
