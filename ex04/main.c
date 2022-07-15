#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ex 04\n");
    int idade;
    char nome[100];

    printf ("Digite seu nome: ");
    scanf ("%s", nome);
    printf ("\nDigite sua idade: ");
    scanf ("%d", &idade);
    printf ("\n%s, voce tem aproximadamente %d dias \n", nome, idade*365);

    return 0;
}
