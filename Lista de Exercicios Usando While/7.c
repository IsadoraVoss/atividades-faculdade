// Exercício 7: Imprimir os quadrados dos números de 1 a 10
#include <stdio.h>

int main() {
    int i = 1;

    // Enquanto i for menor ou igual a 10
    while (i <= 10) {
        printf("%d ao quadrado é %d\n", i, i * i);
        i++;
    }

    return 0;
}
