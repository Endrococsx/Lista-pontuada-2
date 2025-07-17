#include <stdio.h> 
int main(){ 
    
    int X, Y, i; 
    unsigned long long resultado = 1; 
 
    printf("Digite o valor de X (base): "); 
    scanf("%d", &X); 
    printf("Digite o valor de Y (expoente): "); 
    scanf("%d", &Y); 
 
    if (X < 0 || Y < 0) { 
        printf("Erro: os valores devem ser inteiros e positivos.\n"); 
        return 1; 
    } 
 
    for (i = 1; i <= Y; i++) { 
        resultado *= X; 
    } 
 
    printf("%d elevado a %d é %llu.\n", X, Y, resultado); 
 
    return 0; 
} 