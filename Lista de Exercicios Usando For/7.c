// 7. Imprimir os múltiplos de 3 até 30
#include <stdio.h>

int main() {
    int i;

    // Percorre de 1 a 30 e imprime apenas múltiplos de 3
    for(i = 1; i <= 30; i++) {
        if(i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
