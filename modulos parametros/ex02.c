// Ex02 - Guardião da Aldeia
// Autor: Mariana Temporim Terreira

#include <stdio.h>

void verificarMaioridade(int idade) {
    printf("Estou no procedimento!\n");

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    printf("saindo do procedimento!\n");
}

int main() {
    int quantidade, i, idade;

    printf("Quantas idades voce deseja verificar?:\n");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite o %d valor:\n", i + 1);
        scanf("%d", &idade);

        printf("Chamando o procedimento!\n");
        verificarMaioridade(idade);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}
