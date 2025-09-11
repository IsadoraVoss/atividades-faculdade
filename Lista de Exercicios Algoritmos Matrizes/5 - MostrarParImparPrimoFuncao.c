#include <stdio.h>

/* Fun��o para verificar se um n�mero � primo */
int ehPrimo(int n)
{
    int k;
    if (n <= 1)
    {
        return 0; /* N�meros <= 1 n�o s�o primos */
    }
    for (k = 2; k * k <= n; k++)
    {
        if (n % k == 0)
        {
            return 0; /* Encontrou um divisor, n�o � primo */
        }
    }
    return 1; /* � primo */
}

/* Fun��o para somar todos os elementos da matriz */
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

/* Fun��o para mostrar elementos pares */
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

/* Fun��o para mostrar elementos �mpares */
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

/* Fun��o para mostrar n�meros primos */
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
    int matriz[2][3] = {{1,2,3},{4,5,6}}; /* Declara��o e inicializa��o */

    mostrarPares(2, 3, matriz);
    mostrarImpares(2, 3, matriz);
    mostrarPrimos(2, 3, matriz);

    printf("Soma dos elementos: %d\n", somaMatriz(2, 3, matriz));

    return 0;
}
