#include <stdio.h> 
 
int main() { 
    int numero; 
    int soma_negativos = 0; 
 
    printf("Digite números inteiros (0 para encerrar):\n"); 
 
    while (1) { 
        scanf("%d", &numero); 
 
        if (numero == 0) { 
            break; 
        } 
 
        if (numero < 0) { 
            soma_negativos += numero; 
        } 
    } 
 
    printf("Somatório dos números negativos: %d\n", soma_negativos); 
 
    return 0; 
} 