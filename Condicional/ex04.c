// Ex04. O Enigma dos Divisores
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero:");
    scanf("%d", &numero);
    
    while (numero >= 0) 
    {
        if (numero % 5 == 0 && numero % 3 == 0) 
        {
            printf("\nO numero %d e divisivel por 5 e 3 ao mesmo tempo",numero);
        } 
        else if (numero % 5 == 0) 
        {
            printf("\nO numero %d e divisivel por 5 mas nao por 3",numero);
        }
        else if (numero % 3 == 0) 
        {
            printf("\nO numero %d e divisivel por 3 mas nao por 5",numero);
        }
        else 
        {
            printf("\nO numero %d nao e divisivel nem por 5 nem por 3",numero);
        }
        
        printf("\nDigite um numero(flag valor negativo):");
        scanf("%d", &numero);
    }
    return 0;
}