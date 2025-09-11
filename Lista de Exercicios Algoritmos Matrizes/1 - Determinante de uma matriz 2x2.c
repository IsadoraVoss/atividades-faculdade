// Determinante de uma matriz 2x2
// Determinante 2x2 é definido como:

/*

a b
c d

=  ad - bc

*/

#include <stdio.h>

/* Calcula determinante 2x2 */

int determinante2x2(int m[2][2])
{
    return m[0][0]*m[1][1] - m[0][1]*m[1][0];
}

int main()
{
    int matriz[2][2] =
    {
        {4, 6},
        {3, 8}
    };
    printf("Determinante da matriz: %d\n", determinante2x2(matriz));
    return 0;
}

