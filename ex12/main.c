#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 12\n");

    float salarioBruto, salarioAumento, salarioImp;
    float taxaAumento, taxaImposto;

    taxaAumento = 0.15;
    taxaImposto = 0.08;

    printf ("\ninforme seu salario: ");
    scanf ("%f", &salarioBruto);
    salarioAumento = salarioBruto*(taxaAumento+1);
    printf ("\nseu salario com aumento: %.2f ", salarioAumento);
    salarioImp = salarioAumento*(1-taxaImposto);
    printf ("\nseu salario descontado: %.2f ", salarioImp );

    return 0;
}
