#include <stdio.h> 
int main(){ 
    float n1, n2, n3, media, somaMedias = 0; 
    int totalAlunos = 50; 
 
    for (int i = 1; i <= totalAlunos; i++) { 
        printf("Aluno %d:\n", i); 
 
        printf("Informe a nota 1: "); 
        scanf("%f", &n1); 
 
        printf("Informe a nota 2: "); 
        scanf("%f", &n2); 
 
        printf("Informe a nota 3: "); 
        scanf("%f", &n3); 
 
        media = (n1 * 2 + n2 * 4 + n3 * 3) / 10; 
        somaMedias += media; 
 
        printf("Média ponderada: %.2f - ", media); 
 
        if (media >= 7) { 
            printf("Aprovado\n"); 
        } else { 
            printf("Reprovado\n"); 
        } 
    } 
 
    printf("\nMédia geral da turma: %.2f\n", somaMedias / totalAlunos); 
 
    return 0; 
} 