#include <stdio.h> 
 int main(){ 
    int n, i; 
    double S = 0.0; 
 
    printf("Digite um número inteiro e positivo: "); 
    scanf("%d", &n); 
 
    if (n <= 0) { 
        printf("Número inválido. Digite um valor inteiro e positivo.\n"); 
        return 1; 
    } 
 
    printf("S = "); 
 
    for (i = 1; i <= n; i++) { 
        printf("1/%d", i); 
        if (i != n) { 
            printf(" + "); 
        } 
 
        S += 1.0 / i; 
    } 
 
    printf("\nValor final de S = %.5lf\n", S); 
 
    return 0; 
}