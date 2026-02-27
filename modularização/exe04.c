// EX04 -Fatorial de um Numero
// Autor: Mariana Temporim Ferreira

#include <stdio.h>
int calcularFatorial(int valor) {
    int fatorial = 1;
    printf("Chamando o procedimento!\n");
    printf("Estou no procedimento!\n");
    for (int i = 1; i <= valor; i++) {
        fatorial *= i;
    }
    printf("saindo do procedimento!\n");
    return fatorial;
}

int main(void) {
    int n, valor, resultado;
    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite o %d valor:\n", i + 1);
        scanf("%d", &valor);
        resultado = calcularFatorial(valor);
        printf("Voltou do procedimento!\n");
        printf("O fatorial de %d = %d\n", valor, resultado);
    }
    return 0;
}
