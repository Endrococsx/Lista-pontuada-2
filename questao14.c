#include <stdio.h> 
int main(){ 
 
    int valor, positivos = 0, negativos = 0, total = 0; 
    float soma = 0; 
 
    printf("Digite os valores (digite 0 para encerrar):\n"); 
 
    while (1) { 
        scanf("%d", &valor); 
 
        if (valor == 0) { 
            break; 
        } 
 
        soma += valor; 
        total++; 
 
        if (valor > 0) { 
            positivos++; 
        } else { 
            negativos++; 
        } 
    } 
 
    if (total == 0) { 
        printf("Nenhum valor foi inserido.\n"); 
    } else { 
        float media = soma / total; 
        float perc_positivos = (positivos * 100.0) / total; 
        float perc_negativos = (negativos * 100.0) / total; 
 
        printf("Média aritmética: %.2f\n", media); 
        printf("Quantidade de valores positivos: %d\n", positivos); 
        printf("Quantidade de valores negativos: %d\n", negativos); 
        printf("Percentual de positivos: %.2f%%\n", perc_positivos); 
        printf("Percentual de negativos: %.2f%%\n", perc_negativos); 
    } 
 
    return 0; 
}