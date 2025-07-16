#include <stdio.h> 
 
int main() { 
    int numero; 
    int soma_total = 0, soma_pares = 0; 
    int qtd_total = 0, qtd_pares = 0, qtd_impares = 0; 
 
    printf("Digite números positivos (0 para encerrar):\n"); 
 
    while (1) { 
        scanf("%d", &numero); 
 
        if (numero < 0) { 
            printf("Número inválido. Digite apenas positivos ou zero para finalizar.\n"); 
            continue; 
        } 
 
        if (numero == 0) { 
            break; 
        } 
 
        soma_total += numero; 
        qtd_total++; 
 
        if (numero % 2 == 0) { 
            qtd_pares++; 
            soma_pares += numero; 
        } else { 
            qtd_impares++; 
        } 
    } 
 
    if (qtd_total == 0) { 
        printf("Nenhum número foi inserido.\n"); 
    } else { 
        float media_pares = (qtd_pares > 0) ? (float)soma_pares / 
qtd_pares : 0; 
        float media_geral = (float)soma_total / qtd_total; 
 
        printf("\nQuantidade de pares: %d\n", qtd_pares); 
        printf("Quantidade de ímpares: %d\n", qtd_impares); 
        printf("Média dos pares: %.2f\n", media_pares); 
        printf("Média geral: %.2f\n", media_geral); 
    } 
 
    return 0; 
} 