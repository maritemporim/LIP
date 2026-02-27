// EX07 - Verificacao de Numero Primo
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

void verificarPrimo(int numero) {
    printf("Chamando o procedimento!\n");
    printf("Estou no procedimento!\n");

    int ehPrimo = 1;

    if (numero <= 1) {
        ehPrimo = 0;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo == 1) {
        printf("Numero %d eh primo!\n", numero);
    } else {
        printf("Numero %d nao eh primo!\n", numero);
    }

    printf("saindo do procedimento!\n");
}

int main() {
    int quantidade, valor;

    printf("Quantos numero voce deseja verificar?:\n");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite o %d numero a ser verificado:\n", i);
        scanf("%d", &valor);

        verificarPrimo(valor);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}
