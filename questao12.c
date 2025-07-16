#include <stdio.h> 
 
int main() { 
    int n, valor; 
 
    for (int i = 0; i < 20; i++) { 
        printf("Digite o valor %d: ", i + 1); 
        scanf("%d", &valor); 
 
        printf("Tabuada de %d:\n", valor); 
        for (n = 1; n <= valor; n++) { 
            printf("%d x %d = %d\n", n, valor, n * valor); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
}