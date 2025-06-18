#include <stdio.h>

int main(){
    // define as variáveis
    double pi, raio, area;
    
    // define o valor de pi
    pi = 3.14159;
    
    // recebe valor do raio
    scanf("%lf", &raio);
    
    // calcula a area com base no raio informado
    area = pi*(raio*raio);
    
    // imprime o resultado da operação
    printf("A=%.4f",area);
    
    return 0;
}