#include <stdio.h>
int main (){

printf("Escreva valores inteiros positivos para a contagem:\n");
float a;
float contagem = 0;
float soma = 0;

do{
   scanf("%f", &a);
   if (a < 0){
      break;
   }else if(a > 0){
      contagem += 1;
      soma += a;
   }

}while(1);

float media = soma / contagem;
printf("A média aritmética dos números inseridos É:\n%.2f", media);

return 0;
}
