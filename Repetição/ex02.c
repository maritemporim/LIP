// Ex02. Ímpares a Partir de um Valor
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int vIn, c = 0;  
 
    printf("Digite o valor inicial:\n");
    scanf("%d", &vIn);

    if (vIn % 2 == 0) {
        vIn++;
    } else {
        vIn += 2;
    }

    while (c < 10) {
        printf("%d", vIn);
        printf(",");
    
        vIn += 2; 
        c++;  
    }
    
    printf("\n");
    
    return 0;
}