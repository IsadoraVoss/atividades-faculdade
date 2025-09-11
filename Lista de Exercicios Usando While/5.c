// Exercício 5: Somar os números de 1 a 10
#include <stdio.h>

int main() {
    int i = 1, soma = 0;

    // Enquanto i for menor ou igual a 100
    while (i <= 100) {
        soma += i; // Acumula a soma
        i++;
    }

    printf("A soma de 1 a 100 é: %d\n", soma);

    return 0;
}
