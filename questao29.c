#include <stdio.h> 
int main(){ 
 
    int i; 
    int soma = 0; 
    int contador = 0; 
    double media; 
 
    for(i = 13; i <= 73; i++) { 
        soma += i; 
        contador++; 
    } 
 
    media = (double)soma / contador; 
 
    printf("A média aritmética dos números de 13 a 73 é: %.2lf\n", media); 
 
    return 0; 
}