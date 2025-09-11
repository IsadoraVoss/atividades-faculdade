// Soma das diagonais de uma matriz 5x5
// Diagonal principal: elementos a[i][i].
// Diagonal secundária: elementos a[i][n-1-i].
// São úteis em cálculo de traço, determinantes (para matrizes 2x2 e 3x3) e problemas geométricos.

#include <stdio.h>

#define N 5 // Tamanho da matriz

int main()
{
    // Declaração e inicialização da matriz
    int matriz[N][N] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int i; // Índice do loop
    int somaPrincipal = 0;  // Acumulador da diagonal principal
    int somaSecundaria = 0; // Acumulador da diagonal secundária

    // Percorre a matriz
    for (i = 0; i < N; i++)
    {
        somaPrincipal += matriz[i][i]; // Elementos da diagonal principal
        somaSecundaria += matriz[i][N-1-i]; // Elementos da diagonal secundária
    }

    // Exibe resultados
    printf("Soma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaSecundaria);
    return 0;
}
