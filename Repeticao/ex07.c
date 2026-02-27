// Ex07. Sequência de Fibonacci
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int n, termo1 = 1, termo2 = 1, proximo, i;
    
    do {
        printf("Digite um numero maior que 2:\n");
        scanf("%d", &n);
        
        if(n <= 2) {
            printf("Numero invalido! Deve ser maior que 2.\n");
        }
    } while(n <= 2);

    printf("A sequencia de Fibonaacci ate o %d termo: ", n);

    printf("1");
    
    for(i = 2; i <= n; i++) {
        if(i == 2) {
            printf(",1");
        } else {
            proximo = termo1 + termo2;
            printf(",%d", proximo);
            
            termo1 = termo2;
            termo2 = proximo;
        }
    }
    
    printf("\n");
    
    return 0;
}