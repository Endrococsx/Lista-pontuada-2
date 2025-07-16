#include <stdio.h> 
 
int main() { 
    int numero; 
    int soma = 0, contador = 0; 
    float media; 
 
    printf("Digite números inteiros (0 para encerrar):\n"); 
 
    while (1) { 
        scanf("%d", &numero); 
 
        if (numero == 0) 
            break; 
 
        if (numero % 2 == 0) { 
            soma += numero; 
            contador++; 
        } 
    } 
 
    if (contador == 0) { 
        printf("Nenhum número par foi digitado.\n"); 
    } else { 
        media = (float)soma / contador; 
        printf("Média dos números pares: %.2f\n", media); 
    } 
 
    return 0; 
} 