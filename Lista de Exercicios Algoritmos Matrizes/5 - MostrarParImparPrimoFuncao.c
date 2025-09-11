#include <stdio.h>

/* Função para verificar se um número é primo */
int ehPrimo(int n)
{
    int k;
    if (n <= 1)
    {
        return 0; /* Números <= 1 não são primos */
    }
    for (k = 2; k * k <= n; k++)
    {
        if (n % k == 0)
        {
            return 0; /* Encontrou um divisor, não é primo */
        }
    }
    return 1; /* É primo */
}

/* Função para somar todos os elementos da matriz */
int somaMatriz(int linhas, int colunas, int matriz[linhas][colunas])
{
    int i, j, soma = 0;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

/* Função para mostrar elementos pares */
void mostrarPares(int linhas, int colunas, int matriz[linhas][colunas])
{
    int i, j;
    printf("Elementos pares: ");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");
}

/* Função para mostrar elementos ímpares */
void mostrarImpares(int linhas, int colunas, int matriz[linhas][colunas])
{
    int i, j;
    printf("Elementos impares: ");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");
}

/* Função para mostrar números primos */
void mostrarPrimos(int linhas, int colunas, int matriz[linhas][colunas])
{
    int i, j;
    printf("Elementos primos: ");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (ehPrimo(matriz[i][j]))
            {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");
}

int main()
{
    int matriz[2][3] = {{1,2,3},{4,5,6}}; /* Declaração e inicialização */

    mostrarPares(2, 3, matriz);
    mostrarImpares(2, 3, matriz);
    mostrarPrimos(2, 3, matriz);

    printf("Soma dos elementos: %d\n", somaMatriz(2, 3, matriz));

    return 0;
}
