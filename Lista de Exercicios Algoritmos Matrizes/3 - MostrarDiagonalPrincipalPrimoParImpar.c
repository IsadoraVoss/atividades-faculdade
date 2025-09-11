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
            return 0; /* Encontrou divisor, não é primo */
        }
    }
    return 1; /* É primo */
}

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; /* Declaração */
    int i, valor;

    printf("Diagonal principal e suas classificacoes:\n");
    for(i = 0; i < 3; i++)
    {
        valor = matriz[i][i];
        printf("Elemento %d: ", valor);

        /* Verifica par ou ímpar */
        if(valor % 2 == 0)
        {
            printf("par");
        }
        else
        {
            printf("impar");
        }

        /* Verifica se é primo */
        if(ehPrimo(valor))
        {
            printf(" e primo");
        }

        printf("\n");
    }
    return 0;
}
