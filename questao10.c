#include <stdio.h> 
 
int main() { 
    int codigo; 
    float nota1, nota2, nota3, maior, media; 
 
    while (1) { 
        printf("\nDigite o código do aluno (negativo para encerrar): "); 
        scanf("%d", &codigo); 
 
        if (codigo < 0) 
            break; 
 
        printf("Digite as três notas do aluno:\n"); 
        scanf("%f %f %f", &nota1, &nota2, &nota3); 
        maior = nota1; 
        if (nota2 > maior) maior = nota2; 
        if (nota3 > maior) maior = nota3; 
        if (maior == nota1) 
            media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10; 
        else if (maior == nota2) 
            media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10; 
        else 
            media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10; 
        printf("Código do aluno: %d\n", codigo); 
        printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3); 
        printf("Média ponderada: %.2f\n", media); 
 
        if (media >= 5) 
            printf("Situação: APROVADO\n"); 
        else 
            printf("Situação: REPROVADO\n"); 
    } 
 
    return 0; 
}