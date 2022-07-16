#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("ex 36\n");

    int quantidade=0;
    float salarioMin=0, salarioF=0, sobra=0;

    printf ("\ninforme o valor atual do salario minimo: ");
    scanf ("%f", &salarioMin);
    printf ("\ninforme o salario do funcionario: ");
    scanf ("%f", &salarioF);
    quantidade = salarioF/salarioMin;
    sobra = fmod(salarioF, salarioMin);
    printf ("\no funcionario recebe %d salarios minimos e %.2f reais\n", quantidade, sobra);


    return 0;
}
