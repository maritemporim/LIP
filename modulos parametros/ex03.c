// Ex03 - Saudação Real
// Autor: Mariana Temporim Terreira

#include <stdio.h>
#include <string.h>

void saudarVisitante(char nome[]) {
    printf("Estou no procedimento!\n");
    if (strlen(nome) == 0) {
        printf("Ola, Seja bem-vindo ao Reino!\n");
    } else {
        printf("Ola,%s! Seja bem-vindo ao Reino!\n", nome);
    }
    printf("saindo do procedimento!\n");
}

int main() {
    int quantidade, i;
    char nome[51];

    printf("Quantos visitantes voce deseja?:\n");
    scanf("%d", &quantidade);
    getchar();

    for (i = 0; i < quantidade; i++) {
        printf("Digite o %d nome:\n", i + 1);
        fgets(nome, sizeof(nome), stdin);

        if (nome[strlen(nome) - 1] == '\n') {
            nome[strlen(nome) - 1] = '\0';
        }

        printf("Chamando o procedimento!\n");
        saudarVisitante(nome);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}