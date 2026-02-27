// Ex09 - Poder da Potência
// Autor: Mariana Temporim Terreira

#include <stdio.h>

int calcularPotencia(int base, int expoente) {
    printf("Estou na funcao!\n");
    int resultado = 1;
    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    printf("saindo da funcao!\n");
    return resultado;
}

int main() {
    int quantidade, base, expoente, resultado;

    printf("Quantas formulas deseja calcular?:\n");
    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++) {
        printf("conjunto %d:\n", i+1);
        printf("Digite a base:\n");
        scanf("%d", &base);
        printf("Digite o expoente:\n");
        scanf("%d", &expoente);

        printf("Chamando a funcao!\n");
        resultado = calcularPotencia(base, expoente);
        printf("Voltou da funcao\n");

        printf("%d elevado a %d = %d\n", base, expoente, resultado);
    }

    return 0;
}