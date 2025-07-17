#include <stdio.h> 
 
int main() { 
    int codigo; 
    float nota1, nota2, nota3, media; 
    while (1) { 
        printf("Digite o código do aluno (digite 0 para encerrar): "); 
        scanf("%d", &codigo); 
        if (codigo == 0) { 
            break; 
        } 
        printf("Digite a nota 1: "); 
        scanf("%f", &nota1); 
        printf("Digite a nota 2: "); 
        scanf("%f", &nota2); 
        printf("Digite a nota 3: "); 
        scanf("%f", &nota3); 
        media = (nota1 + nota2 + nota3) / 3; 
        printf("A média das notas do aluno %d é: %.2f\n\n", codigo, 
media); 
    } 
 
    printf("Programa encerrado.\n"); 
    return 0; 
}
