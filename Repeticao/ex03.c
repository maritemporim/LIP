// Ex03. Soma Progressiva
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um numero:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("\nA soma de todos os numeros de 1 ate %d = %d\n", n, soma);

    return 0;
}