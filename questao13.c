#include <stdio.h> 
 
unsigned long long fatorial(int num) { 
    unsigned long long resultado = 1; 
    for (int i = 2; i <= num; i++) { 
        resultado *= i; 
    } 
    return resultado; 
} 
 
int main() { 
    int n, valor; 
 
    printf("Digite quantos valores serão lidos: "); 
    scanf("%d", &n); 
 
    printf("\nValor\tFatorial\n"); 
    printf("------------------\n"); 
 
    for (int i = 0; i < n; i++) { 
        printf("Digite o valor %d: ", i + 1); 
        scanf("%d", &valor); 
 
        if (valor < 0) { 
            printf("Fatorial não definido para números negativos.\n"); 
            continue; 
        } 
 
        printf("%d\t%llu\n", valor, fatorial(valor)); 
    } 
 
    return 0; 
}