#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex08\n");
    float materiaUm, materiaDois, materiaTres;

    printf ("\ninforme suas tres, notas com um espaco entre elas: ");
    scanf ("%f %f %f", &materiaUm, &materiaDois, &materiaTres);
    printf ("\nsua media final: %.1f", (materiaUm+2*materiaDois+3*materiaTres)/6);
    return 0;
}
