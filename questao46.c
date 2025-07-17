#include <stdio.h> 
int main(){

    char sexo, corOlhos, corCabelos; 
    int idade; 
    int total = 500; 
 
    int maiorIdade = 0; 
    int countMulheresEspecificas = 0; 
 
    for (int i = 0; i < total; i++) { 
        printf("Pessoa %d:\n", i + 1); 
 
        printf("Sexo (M/F): "); 
        scanf(" %c", &sexo); 
 
        printf("Cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): "); 
        scanf(" %c", &corOlhos); 
 
        printf("Cor dos cabelos (L - Louros, C - Castanhos, P - Pretos): "); 
        scanf(" %c", &corCabelos); 
 
        printf("Idade: "); 
        scanf("%d", &idade); 
 
        if (idade > maiorIdade) { 
            maiorIdade = idade; 
        } 
 
        if (sexo == 'F' && idade >= 18 && idade <= 35 && corOlhos == 'V' 
&& corCabelos == 'L') { 
            countMulheresEspecificas++; 
        } 
 
        printf("\n"); 
    } 
 
    printf("Maior idade do grupo: %d anos\n", maiorIdade); 
    printf("Quantidade de mulheres com 18 a 35 anos, olhos verdes e cabelos louros: %d\n", countMulheresEspecificas); 
 
    return 0; 
} 