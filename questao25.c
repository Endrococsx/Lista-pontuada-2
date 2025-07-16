#include <stdio.h> 
 
int main() { 
    int codigo; 
    float preco, novoPreco; 
    float somaSemAumento = 0, somaComAumento = 0; 
    int contador = 0; 
 
    printf("Digite o código do produto (negativo para encerrar):\n"); 
 
    while (1) { 
        printf("\nCódigo: "); 
        scanf("%d", &codigo); 
 
        if (codigo < 0) 
            break; 
 
        printf("Preço de custo: R$ "); 
        scanf("%f", &preco); 
 
        novoPreco = preco * 1.20; 
 
        printf("Produto %d - Novo preço: R$ %.2f\n", codigo, novoPreco); 
 
        somaSemAumento += preco; 
        somaComAumento += novoPreco; 
        contador++; 
    } 
 
    if (contador > 0) { 
        printf("\nMédia dos preços SEM aumento: R$ %.2f\n", somaSemAumento 
/ contador); 
        printf("Média dos preços COM aumento: R$ %.2f\n", somaComAumento / 
contador); 
    } else { 
        printf("\nNenhum produto foi inserido.\n"); 
    } 
 
    return 0; 
}