#include <stdio.h> 
int main(){ 
int N, i, j; 
    double E = 1.0, fatorial; 
    do { 
        printf("Digite um valor inteiro e positivo para N: "); 
        scanf("%d", &N); 
        if (N < 0) { 
            printf("Erro: o valor deve ser positivo.\n"); 
        } 
    } while (N < 0); 
    for (i = 1; i <= N; i++) { 
        fatorial = 1.0; 
        for (j = 1; j <= i; j++) { 
            fatorial *= j; 
        } 
        E += 1.0 / fatorial; 
    } 
 
    printf("O valor de E é: %.10lf\n", E); 
 
    return 0; 
} 
