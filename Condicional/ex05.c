// Ex05. Jogo da Adivinhação Numérica
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int numero, palpite, tentativas;
    char resposta;
    
    printf("Pense em um numero de 1 a 1023");
    printf("\nNeste caso para testar o programa me diga o numero que voce escolheu:");
    scanf("%d", &numero);
    
    while (numero >= 1) {
        int min = 1;
        int max = 1023;
        tentativas = 0;
        
        do {
            palpite = min + (max - min) / 2;
            tentativas++;
            
            printf("\nO numerio >,< ou = %d", palpite);
            
            if (numero < palpite) {
                max = palpite - 1;
                resposta = '<';
            } else if (numero > palpite) {
                min = palpite + 1;
                resposta = '>';
            } else {
                resposta = '=';
            }
            
        } while (resposta != '=' && tentativas < 10);
        
        if (resposta == '=') {
            printf("\nAdvinhei o numero %d em %d tentativas!", palpite, tentativas);
        } else {
            printf("\nNao consegui adivinhar em 10 tentativas!");
        }
        
        printf("\nPense em um numero de 1 a 1023(flag valor <1)");
        printf("\nNeste caso para testar o programa me diga o numero que voce escolheu:");
        scanf("%d", &numero);
    }
    
    return 0;
}