#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 18\n");
    int horaN, horaE;
    float salarioB, salarioL;
    printf ("\ninforme o numero de horas normais trabalhadas: ");
    scanf ("%d", &horaN);
    printf ("\ninforme o numero de horas extras trabalhadas: ");
    scanf ("%d", &horaE);
    salarioB = ((horaN*10)+(horaE*15));
    printf ("\nseu salario bruto e: %.2f", salarioB);
    salarioL = salarioB * 0.9;
    printf ("\nseu salario liquido e: %.2f", salarioL);
    return 0;
}
