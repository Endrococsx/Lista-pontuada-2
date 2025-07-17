#include <stdio.h> 
int main(){ 
     int i, a; 
    int negativos = 0; 
 
    for (i = 1; i <= 5; i++) { 
        printf("Digite o valor %d: ", i); 
        scanf("%d", &a); 
 
        if (a < 0) { 
            negativos++; 
        } 
    } 
 
    printf("Quantidade de valores negativos: %d\n", negativos); 
 
    return 0; 
} 
