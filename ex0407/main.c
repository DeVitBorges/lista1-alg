#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 0407\n");

    int numeroInt;

    printf ("insira um numero inteiro: ");
    scanf ("%d", &numeroInt);
    if (numeroInt % 2 == 0){
        if (numeroInt > 10)
            printf ("SIM\n");
            else
            printf ("NAO\n");
        }else {
        if (numeroInt < 50)
            printf ("NAO\n");
            else
                printf ("SIM\n");
         }

    return 0;
}
