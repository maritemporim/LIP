// Ex05. Soma de Conjunto
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int num, soma = 0;

    while (1) {
        printf("Digite um numero (-1) para ternimar:");
        printf("\n");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        soma += num;
    }

    printf("\nA soma dos numeros fornecidos = %d ", soma);

    return 0;
}
