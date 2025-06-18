#include <stdio.h>

int main()
{
    int tempoS=0, hora=0, minuto=0, segundo=0;
    scanf("%d", &tempoS);
    
    hora= tempoS/3600;
    minuto= (tempoS%3600)/60;
    segundo= (tempoS%60);
    
    printf("%d:%d:%d", hora,minuto,segundo);
    
    return 0;
}