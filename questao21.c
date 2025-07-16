#include <stdio.h> 
 
int main() { 
    int num; 
    unsigned long long produtorio = 1; 
    int temPar = 0; 
 
    printf("Digite números positivos (0 para encerrar):\n"); 
 
    while (1) { 
        scanf("%d", &num); 
 
        if (num == 0) 
            break; 
 
        if (num > 0 && num % 2 == 0) { 
            produtorio *= num; 
            temPar = 1; 
        } 
    } 
 
    if (temPar) 
        printf("Produtório dos números pares: %llu\n", produtorio); 
    else 
        printf("Nenhum número par foi digitado.\n"); 
 
    return 0; 
} 