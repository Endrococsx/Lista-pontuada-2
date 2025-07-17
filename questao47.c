#include <stdio.h> 
int main(){
    
    const int totalClientes = 150; 
    char nome[100]; 
    double valorCompras, bonus; 
 
    for (int i = 0; i < totalClientes; i++) { 
        printf("Cliente %d:\n", i + 1); 
 
        printf("Nome: "); 
        getchar(); 
        fgets(nome, sizeof(nome), stdin); 
 
        printf("Valor das compras no ano passado: "); 
        scanf("%lf", &valorCompras); 
 
        if (valorCompras < 500000.0) { 
            bonus = valorCompras * 0.10; 
        } else { 
            bonus = valorCompras * 0.15; 
        } 
 
        printf("Cliente: %s", nome); 
        printf("Bônus calculado: R$ %.2lf\n\n", bonus); 
    } 
 
    return 0; 
} 