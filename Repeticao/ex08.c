// EX08. Tabuada de Multiplicação
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um numero para ver sua tabuada:\n");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++) {
        printf("%d  x %d =   %d\n", numero, i, numero * i);
    }
    
    return 0;
}