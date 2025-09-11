// Verificar se matriz é identidade
// Uma matriz identidade é quadrada, tem 1 na diagonal principal e 0 fora dela.
// É equivalente ao número 1 na multiplicação de matrizes

#include <stdio.h>

#define N 3 // Ordem da matriz

/* Função que verifica se a matriz é identidade */
int ehIdentidade(int matriz[N][N])
{
    int i, j;
    // Percorre todos os elementos
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            // Se for diagonal principal, deve ser 1
            if (i == j && matriz[i][j] != 1)
            {
                return 0;
            }
            // Se não for diagonal principal, deve ser 0
            if (i != j && matriz[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1; // Se passou por tudo, é identidade
}

int main()
{
    int matriz[N][N] =
    {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    if (ehIdentidade(matriz))
    {
        printf("A matriz eh identidade.\n");
    }
    else
    {
        printf("A matriz NAO eh identidade.\n");
    }
    return 0;
}
