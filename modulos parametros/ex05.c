// Ex05 - Adivinhe a Palavra Secreta
// Autor: Mariana Temporim Terreira

#include <stdio.h>
#include <ctype.h>

int contarLetras(char sentenca[]) {
    printf("Estou na funcao!\n");
    int count = 0;
    for(int i = 0; sentenca[i] != '\0'; i++) {
        if(isalpha(sentenca[i])) {
            count++;
        }
    }
    printf("saindo da funcao!\n");
    return count;
}

int main() {
    int quantidade;
    char sentenca[100];

    printf("Quantas sentencas voce deseja contar as letras?:\n");
    scanf("%d", &quantidade);
    getchar(); 

    for(int i = 0; i < quantidade; i++) {
        printf("Digite a %d sentenca:\n", i+1);
        scanf(" %99[^\n]", sentenca);
        getchar();

        printf("Chamando a funcao!\n");
        int total = contarLetras(sentenca);
        printf("Voltou da funcao!\n");

        if(total == 1) {
            printf("A sentenca %s possui 1 letra\n", sentenca);
        } else {
            printf("A sentenca %s possui %d letras\n", sentenca, total);
        }
    }

    return 0;
}