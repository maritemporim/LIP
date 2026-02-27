// EX02 - Versao 02 - Somatorio de Numeros
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

void procedimento(int valor) {
    int soma = 0;

    printf("Chamando o procedimento!\n");
    printf("Estou no procedimento!\n");

    for (int i = 1; i <= valor; i++) {
        soma += i;
    }

    printf("Soma de 1 ate %d = %d\n", valor, soma);
    printf("saindo do procedimento!\n");
}

int main(void) {
    int n, valor;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o %d valor:\n", i + 1);
        scanf("%d", &valor);
        procedimento(valor);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}
