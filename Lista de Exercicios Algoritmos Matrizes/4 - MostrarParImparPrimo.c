// Mostrar se é par, impar e mostrar o número primo

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

int main()
{
    int matriz[2][3] = {{1,2,3},{4,5,6}}; /* Declaração e inicialização */
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
