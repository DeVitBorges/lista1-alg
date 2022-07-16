#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 20\n");

    double la, roupa;
    float relacao;

    printf ("\ninforme o numero de roupas e o numero total de las, separando por um espaco: ");
    scanf ("%d %d", &la, &roupa);
    relacao = (la/roupa);
    printf ("\nse usa %.1f las por roupa", relacao);

    return 0;
}
