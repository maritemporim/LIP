#include <stdio.h>

int dobrarPoder(void){
    printf("Estou no procedimento!");
    return (valor*2);
    printf("saindo do procedimento!");
}

int main(void){
    int n,valor;
    printf("Quantos numeros voce deseja?:");
    scanf("%d",&n);
    for(int i = 0; i <+ n; i++){
        printf("Digite um valor:");
        scanf("%d",&valor);
        printf("Chamando o procedimento com o parametro %d!",valor);
    }
}