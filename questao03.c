#include <stdio.h> 
int main(){ 
float salario, somaSalario = 0.0, maiorSalario = 0.0; 
    int filhos, somaFilhos = 0; 
    int totalPessoas = 0, salarioBaixo = 0; 
 
    printf("Digite o salário (valor negativo para encerrar): "); 
    scanf("%f", &salario); 
 
    while (salario >= 0) { 
        printf("Digite o número de filhos: "); 
        scanf("%d", &filhos); 
 
        somaSalario += salario; 
        somaFilhos += filhos; 
        totalPessoas++; 
 
        if (salario > maiorSalario) { 
            maiorSalario = salario; 
        } 
 
        if (salario <= 100.0) { 
            salarioBaixo++; 
        } 
 
        printf("Digite o salário (valor negativo para encerrar): "); 
        scanf("%f", &salario); 
    } 
 
    if (totalPessoas == 0) { 
        printf("Nenhum dado foi inserido.\n"); 
    } else { 
        printf("\nResultados da pesquisa:\n"); 
        printf("a) Média de salário: R$ %.2f\n", somaSalario / 
totalPessoas); 
        printf("b) Média de filhos: %.2f\n", (float)somaFilhos / 
totalPessoas); 
        printf("c) Maior salário: R$ %.2f\n", maiorSalario); 
        printf("d) Percentual com salário até R$100,00: %.2f%%\n", 
(salarioBaixo * 100.0) / totalPessoas); 
    } 
 
    return 0; 
} 
