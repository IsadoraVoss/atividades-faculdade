// Exercício 9: Encontrar o maior número entre 5 valores digitados
#include <stdio.h>

int main() {
    int i = 1, num, maior;

    printf("Digite o 1º número: ");
    scanf("%d", &maior); // Considera o primeiro como maior inicialmente

    // Começa do segundo número
    while (i < 5) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        if (num > maior) {
            maior = num; // Atualiza se o número for maior
        }

        i++;
    }

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}
