#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 22\n");

    int mUmcent, mCin, mDez, mVC, mCinq, mUmr;
    float total;

    printf ("\nPedrinho, digite quantas moedas de um centavo e de cinco centavos voce tem, as separando por um espaco: ");
    scanf ("%d" "%d", &mUmcent, &mCin);
    printf ("\nagora digite quantas moedas de dez e de vinte e cinco centavos: ");
    scanf ("%d" "%d", &mDez, &mVC);
    printf ("\npor fim, digite o numero de moedas de cinquenta centavos e de um real: ");
    scanf ("%d" "%d", &mCinq, &mUmr);
    total = (0.01*mUmcent + 0.05*mCin + 0.1*mDez + 0.25*mVC + 0.5*mCinq + mUmr);
    printf ("\nvoce tem %.2f reais guardados", total);

    return 0;
}
