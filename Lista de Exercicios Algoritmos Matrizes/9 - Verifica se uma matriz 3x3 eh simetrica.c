// Verificar se uma matriz 3x3 é simétrica
// Uma matriz simétrica é uma matriz quadrada que é igual à sua transposta

#include <stdio.h>

#define N 3 // Define constante para tamanho da matriz

/* Função que verifica se uma matriz é simétrica */
int ehSimetrica(int matriz[N][N])
{
    int i, j; // Índices das linhas e colunas
    // Verificamos apenas a metade superior sem diagonal
    for (i = 0; i < N; i++)
    {
        for (j = i+1; j < N; j++)
        {
            // Compara elementos simétricos
            if (matriz[i][j] != matriz[j][i])
            {
                return 0; // Se encontrar desigualdade, retorna falso
            }
        }
    }
    return 1; // Se não encontrou desigualdade, retorna verdadeiro
}

int main()
{
    // Matriz de teste
    int matriz[N][N] =
    {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    // Chama função e imprime resultado
    if (ehSimetrica(matriz))
    {
        printf("A matriz eh simetrica.\n");
    }
    else
    {
        printf("A matriz NAO eh simetrica.\n");
    }
    return 0; // Indica que o programa terminou corretamente
}
