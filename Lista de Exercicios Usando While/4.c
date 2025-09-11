// Exercício 4: Imprimir a tabuada de 5
#include <stdio.h>

int main() {
    int i = 1;

    // Enquanto i for menor ou igual a 10
    while (i <= 10) {
        printf("5 x %d = %d\n", i, 5 * i); // Calcula e imprime a multiplicação
        i++;
    }

    return 0;
}
