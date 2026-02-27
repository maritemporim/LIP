// EX03 - Versao 03 - Somatorio de Numeros
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int procedimento(int valor) {
    int soma = 0;

    printf("Chamando o procedimento!\n");
    printf("Estou no procedimento!\n");

    for (int i = 1; i <= valor; i++) {
        soma += i;
    }

    printf("saindo do procedimento!\n");

    return soma;
}

int main(void) {
    int n, valor, resultado;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o %d valor:\n", i + 1);
        scanf("%d", &valor);

        resultado = procedimento(valor);

        printf("Voltou do procedimento!\n");
        printf("Soma de 1 ate %d = %d\n", valor, resultado);
    }

    return 0;
}
