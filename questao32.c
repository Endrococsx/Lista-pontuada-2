#include <stdio.h> 
int main(){ 
    int i, a, b, j; 
 
    for (i = 1; i <= 5; i++) { 
        printf("Par %d:\n", i); 
 
        do { 
            printf("Digite o valor de a (inteiro positivo): "); 
            scanf("%d", &a); 
            printf("Digite o valor de b (inteiro positivo e maior que a):"); 
            scanf("%d", &b); 
 
            if (a >= b || a <= 0 || b <= 0) { 
                printf("Valores inválidos. Tente novamente.\n"); 
            } 
        } while (a >= b || a <= 0 || b <= 0); 
 
        printf("Pares entre %d e %d: ", a, b); 
        for (j = a; j <= b; j++) { 
            if (j % 2 == 0) { 
                printf("%d ", j); 
            } 
        } 
        printf("\n\n"); 
    } 
 
    return 0; 
}