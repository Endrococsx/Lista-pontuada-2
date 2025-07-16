#include <stdio.h> 
 
int main() { 
    int sexo, idade; 
    float altura; 
 
    int total = 1000; 
    int count = 0; 
 
    int somaIdade = 0; 
    int somaIdadeHomens = 0; 
    int countHomens = 0; 
    float somaAlturaMulheres = 0; 
    int countMulheres = 0; 
    int countIdade1835 = 0; 
 
    do { 
        printf("Pessoa %d\n", count + 1); 
 
        printf("Sexo (0-Feminino, 1-Masculino): "); 
        scanf("%d", &sexo); 
 
        printf("Idade: "); 
        scanf("%d", &idade); 
 
        printf("Altura (em metros): "); 
        scanf("%f", &altura); 
 
        somaIdade += idade; 
 
        if (sexo == 1) { 
            somaIdadeHomens += idade; 
            countHomens++; 
        } else if (sexo == 0) { 
            somaAlturaMulheres += altura; 
            countMulheres++; 
        } 
 
        if (idade >= 18 && idade <= 35) { 
            countIdade1835++; 
        } 
 
        count++; 
 
        printf("\n"); 
 
    } while (count < total); 
 
    float mediaIdade = (float)somaIdade / total; 
    float mediaAlturaMulheres = (countMulheres > 0) ? somaAlturaMulheres / 
countMulheres : 0.0f; 
    float mediaIdadeHomens = (countHomens > 0) ? (float)somaIdadeHomens / 
countHomens : 0.0f; 
    float percentual1835 = ((float)countIdade1835 / total) * 100; 
 
    printf("Média da idade do grupo: %.2f anos\n", mediaIdade); 
    printf("Média da altura das mulheres: %.2f metros\n", 
mediaAlturaMulheres); 
    printf("Média da idade dos homens: %.2f anos\n", mediaIdadeHomens); 
    printf("Percentual de pessoas entre 18 e 35 anos: %.2f%%\n", 
percentual1835); 
 
    return 0; 
}