// Exercício 10: Calcular o fatorial de um número inteiro positivo
#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não definido para números negativos.\n");
        return 1;
    }

    // Calcula o fatorial usando while
    while (i <= n) {
        fatorial *= i;
        i++;
    }

    printf("O fatorial de %d é %llu\n", n, fatorial);

    return 0;
}
