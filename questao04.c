#include<stdio.h>
int main(){

int chico = 150; //+2x
int ze = 110; //+3x
int anos = 0;
// ze > chico

while(chico >= ze){
   chico += 2;
   ze += 3;
   anos += 1;

}
printf("%d", anos);

return 0;
}
