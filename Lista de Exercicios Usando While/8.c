// Exercício 8: Ler 5 números do usuário e exibir a soma
#include <stdio.h>

int main() {
    int i = 1, num, soma = 0;

    // Enquanto i for menor ou igual a 5
    while (i <= 5) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        soma += num; // Soma os números digitados
        i++;
    }

    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}
