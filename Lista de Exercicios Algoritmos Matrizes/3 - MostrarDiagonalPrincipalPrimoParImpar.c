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
            return 0; /* Encontrou divisor, n�o � primo */
        }
    }
    return 1; /* � primo */
}

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; /* Declara��o */
    int i, valor;

    printf("Diagonal principal e suas classificacoes:\n");
    for(i = 0; i < 3; i++)
    {
        valor = matriz[i][i];
        printf("Elemento %d: ", valor);

        /* Verifica par ou �mpar */
        if(valor % 2 == 0)
        {
            printf("par");
        }
        else
        {
            printf("impar");
        }

        /* Verifica se � primo */
        if(ehPrimo(valor))
        {
            printf(" e primo");
        }

        printf("\n");
    }
    return 0;
}
