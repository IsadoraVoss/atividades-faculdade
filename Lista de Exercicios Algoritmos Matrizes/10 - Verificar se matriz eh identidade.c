// Verificar se matriz � identidade
// Uma matriz identidade � quadrada, tem 1 na diagonal principal e 0 fora dela.
// � equivalente ao n�mero 1 na multiplica��o de matrizes

#include <stdio.h>

#define N 3 // Ordem da matriz

/* Fun��o que verifica se a matriz � identidade */
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
            // Se n�o for diagonal principal, deve ser 0
            if (i != j && matriz[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1; // Se passou por tudo, � identidade
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
