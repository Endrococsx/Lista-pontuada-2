#include <stdio.h> 
int main(){ 
    int valor; 
    int soma = 0; 
    int quantidade = 0; 
    printf("Digite valores inteiros positivos (um valor negativo para encerrar):\n"); 
    while (1) { 
        scanf("%d", &valor); 
        if (valor < 0) { 
            break; 
        } 
        soma += valor; 
        quantidade++; 
    } 
    if (quantidade == 0) { 
        printf("Nenhum valor positivo foi inserido.\n"); 
    } else { 
        float media = (float)soma / quantidade; 
        printf("Média aritmética: %.2f\n", media); 
    } 
 
    return 0; 
}