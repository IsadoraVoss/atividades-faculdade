// Exercício 2: Imprimir os números pares de 2 a 20
#include <stdio.h>

int main() {
    int i = 2;

    // Enquanto i for menor ou igual a 20
    while (i <= 20) {
        printf("%d\n", i); // Imprime o número par
        i += 2;            // Soma 2 para pegar o próximo par
    }

    return 0;
}
