#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex dia 07\n");

    int opcao;

    printf ("MENU:\n 1-lasanha \n 2-macarrao \n 3-carne \n 4-salada \n 5-sair");

    do {
            printf ("\n selecione os pratos que deseja: ");
            scanf ("%d", &opcao);

        switch (opcao){
        case 1:
            printf ("lasanha");
            break;
        case 2:
            printf ("macarrao");
            break;
        case 3:
            printf ("carne");
            break;
        case 4:
            printf ("salada");
            break;
        case 5:
        break;
        default:
        printf ("digito errado");
    }
        }while (opcao!=5);
    return 0;
}
