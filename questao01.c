#include <stdio.h>
int main(){

printf("Escreva cinco valoras para a:\n");
int i;
int a;
int soma = 0;

for(i = 1; i <= 5; i++){
   scanf("%d", &a);
   if(a < 0){
      soma += 1;
   }
}

printf("há um total de %d números negativos", soma);


return 0;
}
