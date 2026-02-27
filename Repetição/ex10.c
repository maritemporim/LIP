// EX10. Quadrado de Caracteres
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main(void) {
    char caracter;
    int lado;

    printf("Digite o tamanho do lado do quadrado:");
    scanf("%d", &lado);

    printf("\nDigite um caractere para formar o quadrado:\n");
    scanf(" %c", &caracter);

    for(int i = 0; i < lado; i++) {  
        for(int j = 0; j < lado; j++) { 
            printf("%c ", caracter);
        }
        printf("\n");  
    }
    
    return 0;
}