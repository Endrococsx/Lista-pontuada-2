#include <stdio.h> 
 
int main() { 
    int idade; 
    char sexo; 
    float salario; 
 
    int contador = 0; 
    float somaSalarios = 0; 
 
    int maiorIdade = -1; 
    int menorIdade = 999; 
 
    int mulheresAte100 = 0; 
 
    printf("Digite idade, sexo (M/F) e salário. Idade negativa encerra:\n"); 
 
    while (1) { 
        printf("Idade: "); 
        scanf("%d", &idade); 
 
        if (idade < 0) 
            break; 
 
        printf("Sexo (M/F): "); 
        scanf(" %c", &sexo); 
 
        printf("Salário: "); 
        scanf("%f", &salario); 
 
        somaSalarios += salario; 
        contador++; 
 
        if (idade > maiorIdade) { 
            maiorIdade = idade; 
        } 
        if (idade < menorIdade) { 
            menorIdade = idade; 
        } 
 
        if ((sexo == 'F' || sexo == 'f') && salario <= 100.0) { 
            mulheresAte100++; 
        } 
    } 
 
    if (contador > 0) { 
        printf("\nMédia de salário: R$ %.2f\n", somaSalarios / contador); 
        printf("Maior idade: %d\n", maiorIdade); 
        printf("Menor idade: %d\n", menorIdade); 
        printf("Quantidade de mulheres com salário até R$100,00: %d\n", 
mulheresAte100); 
    } else { 
        printf("\nNenhum dado foi inserido.\n"); 
    } 
 
    return 0; 
}