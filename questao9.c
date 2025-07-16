#include <stdio.h> 
 
int main() { 
    int numero, maior, menor; 
 
    printf("Digite 50 números inteiros:\n"); 
 
    for (int i = 0; i < 50; i++) { 
        scanf("%d", &numero); 
 
        if (i == 0) { 
            maior = numero; 
            menor = numero; 
        } else { 
            if (numero > maior) 
                maior = numero; 
            if (numero < menor) 
                menor = numero; 
        } 
    } 
 
    printf("\nMaior valor: %d\n", maior); 
    printf("Menor valor: %d\n", menor); 
 
    return 0; 
} 