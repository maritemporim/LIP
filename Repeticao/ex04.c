// Ex04. Fatorial Fascinante
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("\nO fatorial de %d = %d\n", n, fatorial);

    return 0;
}
