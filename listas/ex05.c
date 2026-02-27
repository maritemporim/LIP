// EX05 - A Jornada dos Números Par e Ímpar
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int representantes[20];
    int pares[20], impares[20];
    int i, qtdPares = 0, qtdImpares = 0;

    printf("Digite os 20 elementos:\n");

    for(i = 0; i < 20; i++) {
        printf("Digite o %d representante:\n", i + 1);
        scanf("%d", &representantes[i]);
    }

    printf("Representantes dos clas:");
    for(i = 0; i < 20; i++) {
        if (i < 19)
            printf("%d,", representantes[i]);
        else
            printf("%d.\n", representantes[i]);
    }

    for(i = 0; i < 20; i++) {
        if (representantes[i] % 2 == 0) {
            pares[qtdPares] = representantes[i];
            qtdPares++;
        } else {
            impares[qtdImpares] = representantes[i];
            qtdImpares++;
        }
    }

    printf("Representante   CLA Par\n");
    for(i = 0; i < qtdPares; i++) {
        printf("     %d         PAR\n", pares[i]);
    }

    printf("Representante   CLA Impar\n");
    for(i = 0; i < qtdImpares; i++) {
        printf("     %d         IMPAR\n", impares[i]);
    }

    return 0;
}
