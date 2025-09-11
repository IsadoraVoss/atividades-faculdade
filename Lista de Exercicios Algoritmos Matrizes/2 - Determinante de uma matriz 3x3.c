// Determinante de uma matriz 3x3
// O determinante de uma matriz 3x3 é calculado pela regra de Sarrus:
// det(A)=a(ei−fh)−b(di−fg)+c(dh−eg)
/*

a b c
d e f
g h i

O determinante é usado para verificar invertibilidade (det ≠ 0) e em sistemas lineares.

*/

#include <stdio.h>

/* Função para calcular determinante de matriz 3x3 */
int determinante3x3(int m[3][3])
{
    // Aplica regra de Sarrus
    return m[0][0]*(m[1][1]*m[2][2] - m[1][2]*m[2][1])
           - m[0][1]*(m[1][0]*m[2][2] - m[1][2]*m[2][0])
           + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]);
}

int main()
{
    // Declara e inicializa matriz 3x3
    int matriz[3][3] =
    {
        {2, 5, 3},
        {1, -2, -1},
        {3, 6, 4}
    };

    // Calcula determinante usando função
    int det = determinante3x3(matriz);

    // Exibe resultado
    printf("Determinante da matriz: %d\n", det);
    return 0;
}

