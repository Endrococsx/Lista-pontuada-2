#include <stdio.h> 
int main(){ 
    int i, j, N; 
 
    for (i = 1; i <= 20; i++) { 
        printf("\nDigite o %dº valor de N: ", i); 
        scanf("%d", &N); 
 
        printf("Tabuada de 1 até %d:\n", N); 
        for (j = 1; j <= N; j++) { 
            printf("%d x %d = %d\n", j, N, j * N); 
        } 
    } 
 
    return 0; 
}