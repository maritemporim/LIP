// Ex01 - Dobro Magico
// Autor: Mariana Temporim Terreira

#include <stdio.h>

void dobrarPoder(int valor) {
    printf("Estou no procedimento!\n");
    printf("O dobro de %d = %d\n", valor, valor * 2);
    printf("saindo do procedimento!\n");
}

int main() {
    int quantidade, i, valor;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &quantidade);

    for(i = 0; i < quantidade; i++) {
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        
        printf("Chamando o procedimento com o parametro %d!\n", valor);
        dobrarPoder(valor);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}
