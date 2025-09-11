// Somar elementos da borda de uma matriz 4x4
// A borda de uma matriz � formada pela primeira e �ltima linhas e pela primeira e �ltima colunas.
// Isso � �til em processamento de imagens (bordas de pixels) ou opera��es matriciais com contornos.

#include <stdio.h>

#define N 4 // Tamanho da matriz quadrada

int main()
{
    // Declara��o e inicializa��o da matriz
    int matriz[N][N] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int i, j; // �ndices
    int soma = 0; // Vari�vel acumuladora

    // Percorre toda a matriz
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            // Verifica se est� na borda
            if (i == 0 || i == N-1 || j == 0 || j == N-1)
            {
                soma += matriz[i][j]; // Soma o elemento
            }
        }
    }

    // Mostra o resultado
    printf("Soma dos elementos da borda: %d\n", soma);
    return 0;
}
