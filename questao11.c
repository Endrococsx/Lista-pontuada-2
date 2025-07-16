#include <stdio.h> 
 
int main() { 
    int n, a1, r; 
    int termo, soma = 0; 
 
    printf("Digite o número de termos da PA: "); 
    scanf("%d", &n); 
 
    printf("Digite o primeiro termo (a1): "); 
    scanf("%d", &a1); 
 
    printf("Digite a razão (r): "); 
    scanf("%d", &r); 
 
    printf("Termos da progressão aritmética:\n"); 
    for (int i = 0; i < n; i++) { 
        termo = a1 + i * r; 
        printf("%d ", termo); 
        soma += termo; 
    } 
    printf("\nSoma dos termos: %d\n", soma); 
 
    return 0; 
}