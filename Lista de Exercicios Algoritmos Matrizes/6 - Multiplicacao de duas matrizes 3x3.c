// Multiplicação de duas matrizes 3x3
// Usada para composições de transformações lineares e gráficos 3D.
#include <stdio.h>

#define N 3 // Ordem das matrizes

int main()
{
    // Matrizes de entrada
    int A[N][N] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[N][N] =
    {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int C[N][N]; // Resultado da multiplicação
    int i, j, k;

    // Inicializa matriz C com zeros
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            C[i][j] = 0;
        }
    }

    // Multiplicação de matrizes
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            for (k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j]; // Soma do produto linha x coluna
            }
        }
    }

    // Exibe matriz resultado
    printf("Matriz resultado C = A * B:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

