#include <stdio.h> 
 
int main() { 
    int numero; 
    int intervalo1 = 0; 
    int intervalo2 = 0; 
    int intervalo3 = 0; 
    int intervalo4 = 0; 
 
    printf("Digite os números (digite um número negativo para encerrar):\n"); 
 
    while (1) { 
        scanf("%d", &numero); 
 
        if (numero < 0) { 
            break; 
        } 
 
        if (numero >= 0 && numero <= 25) { 
            intervalo1++; 
        } else if (numero >= 26 && numero <= 50) { 
            intervalo2++; 
        } else if (numero >= 51 && numero <= 75) { 
            intervalo3++; 
        } else if (numero >= 76 && numero <= 100) { 
            intervalo4++; 
        } 
        
    } 
 
    printf("\nResultados:\n"); 
    printf("[0-25]: %d\n", intervalo1); 
    printf("[26-50]: %d\n", intervalo2); 
    printf("[51-75]: %d\n", intervalo3); 
    printf("[76-100]: %d\n", intervalo4); 
 
    return 0; 
}