// 9. Imprimir a sequência de Fibonacci até o décimo termo
#include <stdio.h>

int main() {
    int i, a = 0, b = 1, c;

    printf("Sequência de Fibonacci até o 10º termo:\n");

    // Loop para imprimir os 10 primeiros termos
    for(i = 1; i <= 10; i++) {
        printf("%d\n", a);  // Imprime o termo atual
        c = a + b;          // Calcula o próximo termo
        a = b;              // Atualiza os valores
        b = c;
    }

    return 0;
}
