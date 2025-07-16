#include <stdio.h> 
int main(){ 
    int i, numero, maisAltoNum, maisBaixoNum; 
    float altura, maisAltoAltura = 0, maisBaixoAltura = 9999; 
 
    for (i = 1; i <= 5; i++) { 
        printf("\nDigite o número do %dº aluno: ", i); 
        scanf("%d", &numero); 
        printf("Digite a altura do aluno (em cm): "); 
        scanf("%f", &altura); 
 
        if (altura > maisAltoAltura) { 
            maisAltoAltura = altura; 
            maisAltoNum = numero; 
        } 
 
        if (altura < maisBaixoAltura) { 
            maisBaixoAltura = altura; 
            maisBaixoNum = numero; 
        } 
    } 
 
    printf("\nAluno mais alto: Número %d, Altura: %.2f cm\n", maisAltoNum, 
maisAltoAltura); 
    printf("Aluno mais baixo: Número %d, Altura: %.2f cm\n", maisBaixoNum, 
maisBaixoAltura); 
 
    return 0; 
}