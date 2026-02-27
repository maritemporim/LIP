// Ex06 - Verificador de Números Mágicos
// Autor: Mariana Temporim Terreira

#include <stdio.h>

void verificarParidade(int numero, char *resultado) {
    printf("Estou no procedimento!\n");
    if (numero % 2 == 0) {
        sprintf(resultado, "par");
    } else {
        sprintf(resultado, "impar");
    }
    printf("saindo do procedimento!\n");
}

int main() {
    int quantidade, i, valor;
    char paridade[10];

    printf("Quantos numeros voce deseja verificar?:\n");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite um valor:\n");
        scanf("%d", &valor);

        printf("Chamando o procedimento!\n");
        verificarParidade(valor, paridade);
        printf("Voltou do procedimento!\n");

        printf("O numero %d : %s\n", valor, paridade);
    }

    return 0;
}