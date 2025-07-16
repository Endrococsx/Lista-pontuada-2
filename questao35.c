#include <stdio.h> 
int main(){ 
    float altura, maiorAltura = 0, menorAltura = 999; 
    int sexo; 
    float somaAlturas = 0, somaAlturasMulheres = 0; 
    int contMulheres = 0; 
 
    for (int i = 1; i <= 50; i++) { 
        printf("Pessoa %d:\n", i); 
 
        
        printf("Informe a altura (em metros): "); 
        scanf("%f", &altura); 
 
        
        printf("Informe o sexo (1-Masculino, 2-Feminino): "); 
        scanf("%d", &sexo); 
 
        
        if (altura > maiorAltura) { 
            maiorAltura = altura; 
        } 
        if (altura < menorAltura) { 
            menorAltura = altura; 
        } 
 
        
        somaAlturas += altura; 
 
        
        if (sexo == 2) { 
            somaAlturasMulheres += altura; 
            contMulheres++; 
        } 
 
        printf("\n"); 
    } 
 
printf("Maior altura da turma: %.2f m\n", maiorAltura); 
printf("Menor altura da turma: %.2f m\n", menorAltura); 
if (contMulheres > 0) { 
printf("Média de altura das mulheres: %.2f m\n", 
somaAlturasMulheres / contMulheres); 
} else { 
printf("Não há mulheres na turma.\n"); 
} 
printf("Média de altura da turma: %.2f m\n", somaAlturas / 50); 
return 0; 
}