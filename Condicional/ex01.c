// Ex01. O Desafio dos Números Rivais
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int pNum, sNum;
    int maior = -1000000; 

    while (1) {
        printf("Digite o primeiro numero competidor:");
        scanf("%d", &pNum);
        printf("\nDigite o segundo numero competidor:\n");
        scanf("%d", &sNum);

        if (pNum < 0 && sNum < 0) {
            break;
        }

        if (pNum > sNum) {
            printf("O numero %d e o vencedor!\n", pNum);
            if (pNum > maior) maior = pNum; 
        } else if (sNum > pNum) {
            printf("O numero %d e o vencedor!\n", sNum);
            if (sNum > maior) maior = sNum; 
        } else {
            printf("Empate!\n");
            if (pNum > maior) maior = pNum; 
        }
    }

    printf("Numero maior de todos:%d ", maior);
    return 0;
}
