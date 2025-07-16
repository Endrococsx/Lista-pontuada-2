#include <stdio.h> 

unsigned long long fatorial(int num) { 
    unsigned long long fat = 1; 
    for (int i = 1; i <= num; i++) { 
        fat *= i; 
    } 
    return fat; 
} 
 
int main() { 
    int N, valor; 
 
    printf("Informe quantos valores deseja processar: "); 
    scanf("%d", &N); 
 
    for (int i = 1; i <= N; i++) { 
        printf("\nDigite o %dº valor: ", i); 
        scanf("%d", &valor); 
 
        if (valor < 0) { 
            printf("Fatorial não definido para números negativos.\n"); 
        } else { 
            printf("Valor: %d | Fatorial: %llu\n", valor, 
fatorial(valor)); 
        } 
    } 
 
    return 0; 
} 