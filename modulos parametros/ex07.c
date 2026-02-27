// Ex07 - Desafio dos Gigantes
// Autor: Mariana Temporim Terreira

#include <stdio.h>

void compararForca(int gigante1, int gigante2) {
    printf("Estou no procedimento!\n");
    if(gigante1 > gigante2) {
        printf("%d > %d\n", gigante1, gigante2);
    } else if(gigante2 > gigante1) {
        printf("%d > %d\n", gigante2, gigante1);
    } else {
        printf("%d igual a %d\n", gigante1, gigante2);
    }
    printf("saindo do procedimento!\n");
}

int main() {
    int quantidade, gigante1, gigante2;

    printf("Quantos conjuntos voce deseja verificar?:\n");
    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++) {
        printf("conjunto %d:\n", i+1);
        printf("Digite a forca do 1 gigante:\n");
        scanf("%d", &gigante1);
        printf("Digite a forca do 2 gigante:\n");
        scanf("%d", &gigante2);

        printf("Chamando o procedimento!\n");
        compararForca(gigante1, gigante2);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}