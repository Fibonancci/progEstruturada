#include <stdio.h>
    
int main(){
    
    // define variáveis
    int n1, n2, soma;
    
    // recebe os valores a serem somados
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    // realiza a soma dos valores
    soma = n1 + n2;
    
    // imprime o resultado da soma
    printf("X = %d", soma);
    
    return 0;
}