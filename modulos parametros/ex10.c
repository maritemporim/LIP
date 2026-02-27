// Ex10 - Desafio do Decifrador de Mensagens
// Autor: Mariana Temporim Terreira

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void separaPalavras(char frase[]) {
    printf("Estou no procedimento!\n");
    
    char *token;
    const char delimiters[] = " ,.;!?";
    
    token = strtok(frase, delimiters);
    
    while(token != NULL) {
        int valido = 0;
        for(int i = 0; token[i] != '\0'; i++) {
            if(isalnum(token[i])) {
                valido = 1;
                break;
            }
        }
        
        if(valido) {
            printf("%s\n", token);
        }
        
        token = strtok(NULL, delimiters);
    }
    printf("saindo do procedimento!\n");
}

int main() {
    int quantidade;
    char frase[151];

    printf("Quantas mensagens deseja decifrar?:\n");
    scanf("%d", &quantidade);
    while(getchar() != '\n');

    for(int i = 0; i < quantidade; i++) {
        printf("conjunto %d:\n", i+1);
        printf("Digite a %d mensagem secreta:\n", i+1);
        fgets(frase, 150, stdin);
        
        frase[strcspn(frase, "\n")] = '\0';

        printf("Chamando o procediemnto!\n");
        separaPalavras(frase);
        printf("Voltou do procedimento\n");
    }

    return 0;
}