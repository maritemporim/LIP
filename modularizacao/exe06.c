// EX06 - Media de Numeros
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

float calcularMedia() {
    printf("Chamando o procedimento!\n");
    printf("Estou no procedimento!\n");

    int valor, soma = 0, contador = 0;

    while (1) {
        printf("Digite um valor (FLAG valor negativo)\n");
        scanf("%d", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        contador++;
    }

    printf("saindo do procedimento!\n");

    if (contador == 0) {
        return 0.0;
    }

    return (float)soma / contador;
}

int main() {
    int conjuntos;
    float media;

    printf("Quantos conjuntos voce deseja?:\n");
    scanf("%d", &conjuntos);

    for (int i = 1; i <= conjuntos; i++) {
        media = calcularMedia();
        printf("Voltou do procedimento!\n");
        printf("A media do %d conjunto foi:%.3f\n", i, media);
    }

    return 0;
}
