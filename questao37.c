#include <stdio.h> 
#include <math.h> 
 
int main(){ 
    float X; 
    
    printf("Informe o valor de X: "); 
    scanf("%f", &X); 
 
    if (X == 0) { 
        printf("Não é possível calcular potências com X = 0 (divisão por zero).\n"); 
        return 1; 
    } 
 
    printf("Os 20 primeiros termos da série 1/X^n:\n"); 
 
    for (int i = 1; i <= 20; i++) { 
        float termo = 1.0 / pow(X, i); 
        printf("1/%.0f^%d = %.6f\n", X, i, termo); 
    } 
 
    return 0; 
}