// Ex08 - Mensagem do Oráculo
// Autor: Mariana Temporim Terreira

#include <stdio.h>
#include <string.h>

void mensagemOraculo(char nome[], char dataNasc[], int diaAtual, int mesAtual, int anoAtual, char mensagem[]) {
    printf("Estou no procedimento!\n");

    int diaNasc, mesNasc, anoNasc;
    sscanf(dataNasc, "%d/%d/%d", &diaNasc, &mesNasc, &anoNasc);

    int idade = anoAtual - anoNasc;
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        idade--;
    }

    sprintf(mensagem, "Ola %s! Voce tem %d anos!", nome, idade);

    printf("saindo do procedimento!\n");
}

int main() {
    int diaAtual, mesAtual, anoAtual;

    printf("Digite a data atual no formato dd/mm/aaaa:\n");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);

    int quant;
    printf("Quantas mensagens deseja enviar?:\n");
    scanf("%d", &quant);
    getchar();

    for (int i = 1; i <= quant; i++) {
        printf("conjunto %d:\n", i);

        char nome[51];
        char dataNasc[11];
        char mensagem[100];

        printf("Digite o nome:\n");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Digite a data de nascimento formato dd/mm/aaaa:\n");
        fgets(dataNasc, sizeof(dataNasc), stdin);
        dataNasc[strcspn(dataNasc, "\n")] = '\0';

        printf("Chamando o procedimento!\n");
        mensagemOraculo(nome, dataNasc, diaAtual, mesAtual, anoAtual, mensagem);
        printf("Voltou do procedimento!\n");
        printf("%s\n", mensagem);
    }

    return 0;
}