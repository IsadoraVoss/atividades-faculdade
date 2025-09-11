// Verificar se uma matriz 3x3 � sim�trica
// Uma matriz sim�trica � uma matriz quadrada que � igual � sua transposta

#include <stdio.h>

#define N 3 // Define constante para tamanho da matriz

/* Fun��o que verifica se uma matriz � sim�trica */
int ehSimetrica(int matriz[N][N])
{
    int i, j; // �ndices das linhas e colunas
    // Verificamos apenas a metade superior sem diagonal
    for (i = 0; i < N; i++)
    {
        for (j = i+1; j < N; j++)
        {
            // Compara elementos sim�tricos
            if (matriz[i][j] != matriz[j][i])
            {
                return 0; // Se encontrar desigualdade, retorna falso
            }
        }
    }
    return 1; // Se n�o encontrou desigualdade, retorna verdadeiro
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

    // Chama fun��o e imprime resultado
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
