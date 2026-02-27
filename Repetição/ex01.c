// Ex01 - Desafio do Triplo Magico
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main(void){

    int n;
    for(int i = 0; i < 5; i++){
        printf("Digite um numero:");
        scanf("%d",&n);
        printf("\nO tripo de %d = %d",n,n*3);
        printf("\n");
    }
}
