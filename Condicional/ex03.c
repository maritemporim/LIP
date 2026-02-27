// Ex03. O Desafio do Guardião dos Números
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int num_series, i, j, numero, menor, maior, soma, contador;
    
    printf("Digite o numero de series:");
    scanf("%d", &num_series);
    
    for (i = 1; i <= num_series; i++) {
        j = 1;
        soma = 0;
        contador = 0;
        
        printf("\nDigite o %d numero da %d serie:", j, i);
        scanf("%d", &numero);
        
        if (numero < 0) {
            printf("\nResultado para a %d serie:", i);
            printf("\nNao existem numeros para essa serie!");
            continue;
        }
        
        menor = maior = numero;
        soma += numero;
        contador++;
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
            if (numero > maior) {
                maior = numero;
            }
            soma += numero;
            contador++;
            j++;
        }
        
        float media = (float)soma / contador;
        printf("\nResultado para a %d serie:", i);
        printf("\nO menor numero encontrado = %d",menor);
        printf("\nO maior numero encontrado = %d",maior);
        printf("\nA media = %.2f", media);
    }
    
    return 0;
}