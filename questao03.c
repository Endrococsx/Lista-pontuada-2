#include <stdio.h>
int main() {

    // a) média do salário da população;
    // b) média do número de filhos;
    // c) maior salário;
    // d) percentual de pessoas com salário até R$100,00.

    int salario;
    int somasalario = 0;
    int filhos;
    int somafilhos = 0;

    int guardarvalor = 0;
    int guardarvalor1 = 0;

    int maior_salario = 0;  
    int salario_ate_100 = 0; 

    do {

        printf("digite o salário do fulano:\n");
        scanf("%d", &salario);

        if (salario < 0) {
            break;
        } else if (salario > 0) {
            guardarvalor += 1;

            if (salario > maior_salario) {  
                maior_salario = salario;
            }

            if (salario <= 100) { 
                salario_ate_100 += 1;
            }
        }

        printf("Digite nº de filhos de ciclano:\n");
        scanf("%d", &filhos);

        if (filhos > 0) {
            guardarvalor1 += 1;
        }

        somasalario += salario;
        somafilhos += filhos;

    } while (salario > 0);

    int mediasalario = somasalario / guardarvalor;
    int mediafilhos = somafilhos / guardarvalor1;

    float percentual_ate_100 = (salario_ate_100 * 100.0) / guardarvalor; 

    printf("Média do salário:\n%d\n", mediasalario);
    printf("Média de filhos:\n%d\n", mediafilhos);
    printf("Maior salário:\n%d\n", maior_salario);
    printf("Percentual de pessoas com salário até R$100,00:\n%.2f%%\n", percentual_ate_100);

    return 0;
}
