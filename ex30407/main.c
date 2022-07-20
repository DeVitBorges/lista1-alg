#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ex 03 04/07\n");

    int x, y, z;

    printf ("digitre tres numeros \n");
    scanf ("%d %d %d", &x, &y, &z);
    if (x>z){
        int tmp = z;
        z = x;
        x = tmp;

//arquivo modificado

    }
    if (x>y){
        int tmp = y;
        y = x;
        x = tmp;
    }
    if (y>z) {
        int tmp = z;
        z = y;
        y = tmp;
            }
            printf ("%d %d %d", x, y, z);

    return 0;
}
