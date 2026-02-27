// EX04 - Caça ao Tesouro Numérico
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    
    int quantidade;
    printf("Digite a quantidade de tesouros:\n");
    scanf("%d", &quantidade);
    
    float tesouros[100];
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %d tesouro:\n", i+1);
        scanf("%f", &tesouros[i]);
    }
    
    printf("Coordenadas dos tesouros:");
    for (int i = 0; i < quantidade; i++) {
        printf("%.0f", tesouros[i]);
        if (i < quantidade-1) {
            printf(",");
        }
    }
    printf(".\n");
    
    while (1) {
        float coordenada;
        printf("Digte a coordenada:\n");
        scanf("%f", &coordenada);
        
        if (coordenada < 0) {
            break;
        }
        
        int encontrado = 0;
        int posicoes[100];
        int count = 0;
        
        for (int i = 0; i < quantidade; i++) {
            if (tesouros[i] == coordenada) {
                posicoes[count] = i+1;
                count++;
                encontrado = 1;
            }
        }
        
        if (encontrado) {
            printf("Tesouro %.0f encontrado ", coordenada);
            if (count == 1) {
                printf("na coordenada:%d", posicoes[0]);
            } else {
                printf("nas coordenadas:");
                for (int i = 0; i < count; i++) {
                    printf("%d", posicoes[i]);
                    if (i < count-1) {
                        printf(",");
                    }
                }
            }
            printf(".\n");
        } else {
            printf("Tesouro %.0f nao encontrado em nenhuma coordenada!\n", coordenada);
        }
    }
    
    return 0;
}