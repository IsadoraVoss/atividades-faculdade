// Mostrar se � par, impar e mostrar o n�mero primo

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

int main()
{
    int matriz[2][3] = {{1,2,3},{4,5,6}}; /* Declara��o e inicializa��o */
    int i, j, soma = 0;

    printf("Elementos pares: ");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            int valor = matriz[i][j];
            soma += valor;

            /* Verifica e imprime pares */
            if(valor % 2 == 0)
            {
                printf("%d ", valor);
            }
        }
    }

    printf("\nElementos impares: ");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            int valor = matriz[i][j];
            if(valor % 2 != 0)
            {
                printf("%d ", valor);
            }
        }
    }

    printf("\nElementos primos: ");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            int valor = matriz[i][j];
            if(ehPrimo(valor))
            {
                printf("%d ", valor);
            }
        }
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}
