#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 17\n");
    float temperaturaC, fahr, aux;
    printf ("\ndigite a temperatura em celsius: ");
    scanf ("%f", &temperaturaC);
    fahr = (temperaturaC*1.8)+32;
    printf ("\na temperatura em fahrenheit e: %.1f", fahr);
    return 0;
}
