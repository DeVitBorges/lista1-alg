#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 2 04/07\n");

    int prim, seg, terc;

    printf ("digite tres numeros com um espaço entre eles: ");
    scanf ("%d %d %d", &prim, &seg, &terc);
    if ((prim > seg) && (prim > terc))
        printf ("o numero maior eh %d", prim);
        else if ((seg > prim) && (seg > terc))
         printf ("o numero maior eh %d", seg);
        else if ((terc > prim) && (terc > seg))
            printf ("o numero maior eh %d", terc);
        else if ((prim==seg) && (prim > terc))
            printf (" o numero maior eh %d", prim);
        else if ((prim==terc) && (prim > seg))
            printf ("o maior numero eh: %d", prim);
        else if ((seg==terc) && (seg > prim))
            printf ("o numero maior eh: %d", seg);
        else
            printf("todos sao iguais");

    return 0;
}
