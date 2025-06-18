#include <stdio.h>

int main()
{
    int idade=0;
    int ano=0;
    int mes=0;
    int dia=0;
    
    scanf("%d", &idade);
    ano = idade/365;
    mes = (idade%365)/30;
    dia = (idade%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", ano, mes, dia);
    
    return 0;
}