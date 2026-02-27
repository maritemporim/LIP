// EX03 - A Balança dos Números
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int quantidade;
    printf("Digite a quantidade de receitas:\n");
    scanf("%d", &quantidade);
    
    for (int i = 1; i <= quantidade; i++) {
        float ingredientes[100];
        int num_ingredientes = 0;
        float valor;
        
        while (1) {
            printf("Digite o %d ingrediente da %d receita:\n", num_ingredientes + 1, i);
            scanf("%f", &valor);
            
            if (valor < 0) {
                break;
            }
            
            ingredientes[num_ingredientes] = valor;
            num_ingredientes++;
            
            if (num_ingredientes >= 100) {
                break;
            }
        }
        
        if (num_ingredientes == 0) {
            printf("Essa receita nao possui ingredientes!\n");
            continue;
        }
        
        float soma = 0;
        for (int j = 0; j < num_ingredientes; j++) {
            soma += ingredientes[j];
        }
        float media = soma / num_ingredientes;
        
        int acima_media = 0;
        int abaixo_media = 0;
        for (int j = 0; j < num_ingredientes; j++) {
            if (ingredientes[j] > media) {
                acima_media++;
            } else if (ingredientes[j] < media) {
                abaixo_media++;
            }
        }
        
        printf("Ingredientes da %d receita:", i);
        for (int j = 0; j < num_ingredientes; j++) {
            printf("%.0f", ingredientes[j]);
            if (j < num_ingredientes - 1) {
                printf(",");
            }
        }
        
        printf("\n%d pistas sao maiores que a media %.2f\n", acima_media, media);
        printf("%d pistas sao menores que a media %.2f\n", abaixo_media, media);
    }
    
    return 0;
}