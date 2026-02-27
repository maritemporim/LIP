// EX05 - Sequencia de Fibonacci
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

void gerarFibonacci(int termos) {
    printf("Chamando o procedimento!\n");
    printf("Estou no procedimento!\n");
    printf("Digite quantos termos da serie:\n");

    if (termos <= 0) {
        printf("Voce escolheu um numero invalido!\n");
    } else {
        int a = 1, b = 1, c;

        for (int i = 1; i <= termos; i++) {
            if (i == 1) {
                printf("%d", a);
            } else if (i == 2) {
                printf(",%d", b);
            } else {
                c = a + b;
                printf(",%d", c);
                a = b;
                b = c;
            }
        }
        printf("\n");
    }

    printf("saindo do procedimento!\n");
}

int main(void) {
    int n, valor;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        gerarFibonacci(valor);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}
