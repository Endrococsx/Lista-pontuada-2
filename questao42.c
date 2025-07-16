#include <stdio.h> 
int main(){ 
    int n; 
    int H; 
 
    printf("Informe um número inteiro positivo: "); 
    scanf("%d", &n); 
 
    if (n <= 0) { 
        printf("Número inválido! Deve ser inteiro e positivo.\n"); 
        return 1; 
    } 
 
    H = 10 * n;   
 
    printf("Resultado da soma: %d\n", H); 
 
    return 0; 
}