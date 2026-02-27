// Ex06. Média de Conjunto
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    float numero, soma = 0;
    int contador = 0;
    
    printf("Digite um numero (-1 para terminar):\n");
    scanf("%f", &numero);
    
    while(numero != -1) {
        soma += numero;
        contador++;
        
        printf("Digite um numero (-1 para terminar):\n");
        scanf("%f", &numero);
    }
    
    if(contador > 0) {
        float media = soma / contador;
        printf("A media dos numeros fornecidos = %.2f\n", media);
    } else {
        printf("Nenhum numero foi fornecido para calcular a media.\n");
    }
    
    return 0;
}