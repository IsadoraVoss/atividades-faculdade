// Exercício 6: Contar quantos múltiplos de 3 existem entre 1 e 50
#include <stdio.h>

int main() {
    int i = 1, contador = 0;

    // Enquanto i for menor ou igual a 50
    while (i <= 50) {
        if (i % 3 == 0) { // Se o número for divisível por 3
            contador++;   // Conta esse número
        }
        i++;
    }

    printf("Existem %d múltiplos de 3 entre 1 e 50.\n", contador);

    return 0;
}
