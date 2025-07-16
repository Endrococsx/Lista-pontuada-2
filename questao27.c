#include <stdio.h> 
 
int main() { 
    int i, num; 
    int maior = -1;         
    int menor = 1000000;     
    long soma = 0; 
 
    for (i = 1; i <= 500; i++) { 
        do { 
            printf("Digite o %dº número inteiro e positivo: ", i); 
            scanf("%d", &num); 
        } while (num <= 0); 
 
        if (num > maior) { 
            maior = num; 
        } 
        if (num < menor) { 
            menor = num; 
        } 
 
        soma += num; 
    } 
 
    float media = soma / 500; 
 
    printf("\nMaior valor: %d\n", maior); 
    printf("Menor valor: %d\n", menor); 
    printf("Média dos valores: %.2f\n", media); 
 
    return 0; 
}