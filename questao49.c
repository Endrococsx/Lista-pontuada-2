#include <stdio.h> 
 
int main() { 
    int N, i; 
    unsigned long long fatorial = 1; 
 
    printf("Digite um número inteiro positivo: "); 
    scanf("%d", &N); 
 
    if (N < 0) { 
        printf("Erro: o número deve ser inteiro e positivo.\n"); 
        return 1; 
    } 
 
    for (i = 1; i <= N; i++) { 
        fatorial *= i; 
    } 
 
    printf("O fatorial de %d é %llu.\n", N, fatorial); 
 
    return 0; 
} 