#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=0,j=0;
    int vetA[10]={6,2,5,5,4,5,6,3,7,6}, *numeros= NULL,vetAux[100];
    
    scanf("%d",&N);
    numeros = (int *) malloc(N*sizeof(int));
    
    for(int i=0;i<N;i++){
        scanf("%d",&numeros[i]);
    }
    
    for(int i=0;i<N;i++){
        int numeroAtual=numeros[i];
        int leds=0;
        if(numeroAtual==0){
            printf("%d leds\n",vetA[0]);
        } else {
            while(numeroAtual>0){
                int digito=numeroAtual%10;
                leds+=vetA[digito];
                numeroAtual=numeroAtual/10;
            }
            printf("%d leds\n",leds);
        }
    }
    
    free(numeros);
    
    return 0;
}