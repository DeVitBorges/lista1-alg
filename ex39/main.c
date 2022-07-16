#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 39\n");

    float salario, conta1, conta2, taxa, sobra;
    salario = 1200;
    conta1 = 200;
    conta2 = 120;
    taxa = 1.02;
    sobra = salario - ((conta1*taxa)+(conta2*taxa));
    printf ("\no restante do seu salario: %.2f\n", sobra);
    return 0;
}
