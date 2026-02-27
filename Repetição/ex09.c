// Ex09. Padrão de Triângulo de Estrelas
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main(void){
    int a;
    printf("Digite a altura do triangulo de estrelas:\n");
    scanf("%d",&a);
    for(int i = 0; i < a; i++){
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("*\n");
    }
}