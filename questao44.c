#include <stdio.h> 
#include <string.h> 
 
#define TOTAL_CIDADES 2 
 
 
typedef struct { 
    int codigo; 
    char estado[3]; 
    int num_veiculos; 
    int num_acidentes; 
} Cidade; 
 
int main() { 
    Cidade cidades[TOTAL_CIDADES]; 
    int i; 
 
    int maior_acidente = -1, menor_acidente = 1000000; 
    int codigo_maior = 0, codigo_menor = 0; 
    long long soma_veiculos = 0; 
    long long soma_acidentes_RS = 0; 
    int cont_RS = 0; 
 
    for (i = 0; i < TOTAL_CIDADES; i++) { 
        printf("Cidade %d\n", i+1); 
        printf("Código: "); 
        scanf("%d", &cidades[i].codigo); 
 
        printf("Estado (2 letras): "); 
        scanf("%s", cidades[i].estado); 
 
        printf("Número de veículos: "); 
        scanf("%d", &cidades[i].num_veiculos); 
 
        printf("Número de acidentes: "); 
        scanf("%d", &cidades[i].num_acidentes); 
 
        if (cidades[i].num_acidentes > maior_acidente) { 
            maior_acidente = cidades[i].num_acidentes; 
            codigo_maior = cidades[i].codigo; 
        } 
        if (cidades[i].num_acidentes < menor_acidente) { 
            menor_acidente = cidades[i].num_acidentes; 
            codigo_menor = cidades[i].codigo; 
        } 
 
        soma_veiculos += cidades[i].num_veiculos; 
 
        if (strcmp(cidades[i].estado, "RS") == 0) { 
            soma_acidentes_RS += cidades[i].num_acidentes; 
            cont_RS++; 
        } 
 
        printf("\n"); 
    } 
 
    double media_veiculos = (double) soma_veiculos / TOTAL_CIDADES; 
    double media_acidentes_RS = (cont_RS > 0) ? (double) soma_acidentes_RS 
/ cont_RS : 0.0; 
 
    printf("Maior índice de acidentes: %d na cidade de código %d\n", 
maior_acidente, codigo_maior); 
    printf("Menor índice de acidentes: %d na cidade de código %d\n", 
menor_acidente, codigo_menor); 
    printf("Média de veículos nas cidades: %.2f\n", media_veiculos); 
    if (cont_RS > 0) { 
        printf("Média de acidentes com vítimas nas cidades do RS: %.2f\n", 
media_acidentes_RS); 
    } else { 
        printf("Nenhuma cidade do RS foi informada.\n"); 
    } 
 
    return 0; 
} 