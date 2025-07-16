#include <stdio.h> 
 
 
int fatorial(int n) { 
    int fat = 1; 
    for (int i = 2; i <= n; i++) { 
        fat *= i; 
    } 
    return fat; 
} 
 
 
int contarDivisores(int n) { 
    int cont = 0; 
    for (int i = 1; i <= n; i++) { 
        if (n % i == 0) { 
            cont++; 
        } 
    } 
    return cont; 
} 
 
int main() { 
    int m; 
 
    printf("Digite valores inteiros positivos (digite 0 ou negativo para encerrar):\n"); 
 
    while (1) { 
        printf("\nDigite m: "); 
        scanf("%d", &m); 
 
        if (m <= 0) { 
            printf("Encerrado!\n"); 
            break; 
        } 
 
        if (m % 2 == 0) { 
            
            int divs = contarDivisores(m); 
            printf("O número %d é par e possui %d divisores.\n", m, divs); 
        } else if (m < 10) { 
            
            int fat = fatorial(m); 
            printf("O número %d é ímpar e menor que 10. Fatorial = %d\n", 
m, fat); 
        } else { 
            
            int soma = (m * (m + 1)) / 2; 
            printf("O número %d é ímpar e >= 10. Soma de 1 até %d = %d\n", 
m, m, soma); 
        } 
    } 
 
    return 0; 
} 