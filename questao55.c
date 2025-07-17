#include <stdio.h> 
#include <time.h> 
 
int main() { 
    struct tm data1 = {0}, data2 = {0}; 
    time_t t1, t2; 
    double diferenca; 
 
    int d1, m1, a1, d2, m2, a2; 
 
    printf("Digite a primeira data (dd mm aaaa): "); 
    scanf("%d %d %d", &d1, &m1, &a1); 
 
    printf("Digite a segunda data (dd mm aaaa): "); 
    scanf("%d %d %d", &d2, &m2, &a2); 
 
    data1.tm_mday = d1; 
    data1.tm_mon = m1 - 1; 
    data1.tm_year = a1 - 1900; 
 
    data2.tm_mday = d2; 
    data2.tm_mon = m2 - 1; 
    data2.tm_year = a2 - 1900; 
 
    t1 = mktime(&data1); 
    t2 = mktime(&data2); 
 
    if (t1 == -1 || t2 == -1) { 
        printf("Erro ao converter datas.\n"); 
        return 1; 
    } 
 
    diferenca = difftime(t2, t1) / (60 * 60 * 24); 
 
    printf("A diferença entre as datas é de %.0f dias.\n", diferenca >= 0 
? diferenca : -diferenca); 
 
    return 0; 
} 