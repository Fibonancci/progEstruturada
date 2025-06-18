#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[201];
    int i=0;
    
    fgets(texto,200,stdin);
    
    while(texto[i] != '\0'){
        if(texto[i]>=65 && texto[i]<=90){
            texto[i] = texto[i]+32;
        }
        i++;
    }
    
    printf("%s",texto);
    
    return 0;
}