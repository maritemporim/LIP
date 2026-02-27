// EX02 - Desvendando Mistérios Numéricos
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int quantidade;
    printf("Digite a quantidade de informacoes:\n");
    scanf("%d", &quantidade);
    
    for (int i = 1; i <= quantidade; i++) {
        float pistas[100];
        int num_pistas = 0;
        float valor;
        
        while (1) {
            printf("Digite a %d pista da %d informacao misteriosa:\n", num_pistas + 1, i);
            scanf("%f", &valor);
            
            if (valor < 0) { 
                break;
            }
            
            pistas[num_pistas] = valor;
            num_pistas++;
            
            if (num_pistas >= 100) { 
                break;
            }
        }
        
        if (num_pistas == 0) {
            printf("Essa informacao nao possui pistas!\n");
            continue;
        }
        
        float soma = 0;
        for (int j = 0; j < num_pistas; j++) {
            soma += pistas[j];
        }
        float media = soma / num_pistas;

        int acima_media = 0;
        for (int j = 0; j < num_pistas; j++) {
            if (pistas[j] > media) {
                acima_media++;
            }
        }

        printf("Pistas da %d informacao misteriosa:\n", i);
        for (int j = 0; j < num_pistas; j++) {
            printf("%.0f", pistas[j]);
            if (j < num_pistas - 1) {
                printf(",");
            }
        }
        //printf(".\n");

        printf("%d pistas sao maiores que a media %.2f\n", acima_media, media);
    }
    
    return 0;
}