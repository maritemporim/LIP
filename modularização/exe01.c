// EX01 - Versao 01 - Somatorio de Numeros
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

void somaN() {
    int valor, soma = 0;

    printf("Chamando o procedimento!\n");
    printf("Estou no procedimento!\n");
    printf("Digite um valor:\n");
    scanf("%d", &valor);

    for (int i = 1; i <= valor; i++) {
        soma += i;
    }

    printf("Soma de 1 ate %d = %d\n", valor, soma);
    printf("saindo do procedimento!\n");
}

int main(void) {
    int n;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        somaN();
        printf("Voltou do procedimento!\n");
    }

    return 0;
}
