// 3. Calcular a soma dos 10 primeiros números naturais
#include <stdio.h>

int main() {
    int i, soma = 0;

    // Loop para somar os 10 primeiros números
    for(i = 1; i <= 10; i++) {
        soma += i;  // soma = soma + i
    }

    printf("Soma dos 10 primeiros números: %d\n", soma);

    return 0;
}
