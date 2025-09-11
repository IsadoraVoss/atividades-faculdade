// 8. Contar quantos números ímpares há entre 1 e 50
#include <stdio.h>

int main() {
    int i, contador = 0;

    // Verifica se o número é ímpar e incrementa o contador
    for(i = 1; i <= 50; i++) {
        if(i % 2 != 0) {
            contador++;
        }
    }

    printf("Quantidade de números ímpares entre 1 e 50: %d\n", contador);

    return 0;
}
