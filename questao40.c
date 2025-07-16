#include <stdio.h> 
 
 
unsigned long long fatorial(int num) { 
    unsigned long long fat = 1; 
    for (int i = 1; i <= num; i++) { 
        fat *= i; 
    } 
    return fat; 
} 
 
 
int somatorio(int num) { 
    return num * (num + 1) / 2;   
} 
 
int main() { 
    int n, m; 
 
    printf("Quantos valores serão lidos? "); 
    scanf("%d", &n); 
 
    printf("Valor | Somatório (1 até valor) | Fatorial\n"); 
    printf("------------------------------------------\n"); 
 
    for (int i = 0; i < n; i++) { 
        printf("Digite o valor %d: ", i + 1); 
        scanf("%d", &m); 
 
        if (m < 0) { 
            printf("Valor inválido! Informe um número inteiro positivo.\n"); 
            i--; 
            continue; 
        } 
 
        printf("%5d | %22d | %8llu\n", m, somatorio(m), fatorial(m)); 
    } 
 
    return 0; 
} 