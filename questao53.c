#include <stdio.h> 
#include <stdbool.h> 
 
bool ehPrimo(int num) { 
    if (num < 2) return false; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) 
            return false; 
    } 
    return true; 
} 
 
int main() { 
    int contador = 0; 
    int numero = 2; 
 
    printf("Os 20 primeiros números primos são:\n"); 
 
    while (contador < 20) { 
        if (ehPrimo(numero)) { 
            printf("%d ", numero); 
            contador++; 
        } 
        numero++; 
    } 
 
    printf("\n"); 
    return 0; 
}