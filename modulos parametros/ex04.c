// Ex04 - Cálculo de Notas do Torneio
// Autor: Mariana Temporim Terreira

#include <stdio.h>

float calcularMedia(float nota1, float nota2) {
    printf("Estou na funcao!\n");
    printf("saindo da funcao!\n");
    return (nota1 + nota2) / 2;
}

int main() {
    int quantidade, i;
    float nota1, nota2, media;

    printf("Quantos apresentacoes foram realizadas?:\n");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite as notas da %d apresentacao:\n", i + 1);
        scanf("%f %f", &nota1, &nota2);

        printf("Chamando a funcao!\n");
        media = calcularMedia(nota1, nota2);
        printf("Voltou da funcao!\n");

        printf("Media final:%.2f\n", media);
    }

    return 0;
}