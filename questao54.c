#include <stdio.h> 
 
int main() { 
    float a, b; 
 
    printf("Digite o primeiro número: "); 
    scanf("%f", &a); 
    printf("Digite o segundo número: "); 
    scanf("%f", &b); 
 
    if (a == b) { 
        printf("Erro: os números não podem ser iguais.\n"); 
        return 1; 
    } 
 
    if (a > b) { 
        float temp = a; 
        a = b; 
        b = temp; 
    } 
 
    float intervalo = (b - a) / 3.0; 
 
    float ponto1 = a + intervalo; 
    float ponto2 = a + 2 * intervalo; 
 
    printf("O intervalo entre %.2f e %.2f foi dividido em 3 partes iguais:\n", a, b); 
    printf("1º ponto de divisão: %.2f\n", ponto1); 
    printf("2º ponto de divisão: %.2f\n", ponto2); 
 
    return 0; 
} 