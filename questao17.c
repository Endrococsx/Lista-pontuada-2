#include <stdio.h> 
 
int main() { 
    int m, n; 
 
    printf("Digite pares de valores m e n (ambos positivos). Digite qualquer valor <= 0 para encerrar:\n"); 
 
    while (1) { 
        printf("\nDigite m e n: "); 
        int resultado = scanf("%d %d", &m, &n); 
        if (resultado != 2) { 
            printf("Erro de leitura. Encerrando o programa.\n"); 
            break; 
        } 
        if (m <= 0 || n <= 0) { 
            printf("Fim da leitura.\n"); 
            break; 
        } 
 
        int soma = 0; 
        for (int i = 0; i < n; i++) { 
            soma += m + i; 
        } 
 
        printf("Soma dos %d números a partir de %d: %d\n", n, m, soma); 
    } 
 
    return 0; 
}