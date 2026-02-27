// Ex02. A Caça ao Tesouro dos Números
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int num_series, i, j, numero, menor, primeiro_numero;
    
    printf("Digite o numero de series: ");
    scanf("%d", &num_series);
    
    for (i = 1; i <= num_series; i++) {
        j = 1;
        primeiro_numero = 1;
        
        printf("\nDigite o %d numero da %d serie:", j, i);
        scanf("%d", &numero);
        
        if (numero < 0) {
            printf("\nNao existem numeros para essa serie!");
            continue;
        }
        
        menor = numero;
        primeiro_numero = 0;
        j++;
        
        while (1) {
            printf("\nDigite o %d numero da %d serie (Flag valor negativo):", j, i);
            scanf("%d", &numero);
            
            if (numero < 0) {
                break;
            }
            
            if (numero < menor) {
                menor = numero;
            }
            j++;
        }
        
        printf("\nO menor numero encontrado da %d serie = %d", i, menor);
    }
    
    return 0;
}