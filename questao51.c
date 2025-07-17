#include <stdio.h> 
 
unsigned long long fatorial(int n) { 
    if (n == 0 || n == 1) 
        return 1; 
    else 
        return n * fatorial(n - 1); 
} 
 
int main() { 
    int n; 
 
    printf("Digite um número inteiro positivo: "); 
    scanf("%d", &n); 
 
    if (n < 0) { 
        printf("Erro: o número deve ser inteiro e positivo.\n"); 
        return 1; 
    } 
 
    printf("O fatorial de %d é %llu.\n", n, fatorial(n)); 
 
    return 0; 
} 