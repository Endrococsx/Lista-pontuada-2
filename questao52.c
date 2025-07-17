#include <stdio.h> 
 
unsigned long long fatorial(int x) { 
    if (x == 0 || x == 1) 
        return 1; 
    else 
        return x * fatorial(x - 1); 
} 
 
int main() { 
    int n, p; 
 
    printf("Digite o valor de N (tamanho do conjunto): "); 
    scanf("%d", &n); 
    printf("Digite o valor de p (tamanho do subconjunto): "); 
    scanf("%d", &p); 
 
    if (n < 0 || p < 0 || p > n) { 
        printf("Erro: N e p devem ser inteiros positivos com p <= N.\n"); 
        return 1; 
    } 
 
    unsigned long long arranjo = fatorial(n) / fatorial(n - p); 
    unsigned long long combinacao = arranjo / fatorial(p); 
 
    printf("Arranjo A(%d, %d) = %llu\n", n, p, arranjo); 
    printf("Combinação C(%d, %d) = %llu\n", n, p, combinacao); 
 
    return 0; 
}