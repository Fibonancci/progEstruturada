#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetX=0,N=0,mn=1000,mnI=0;
    
    scanf("%d",&N);
    
    vetX = (int *) malloc(N*sizeof(int));
    
    for(int i =0;i<N;i++){
        scanf("%d",&vetX[i]);
        if(N>1 && N<1000 && mn>vetX[i]){
            mn=vetX[i];
            mnI=i;
        }
    }
    
    printf("Menor valor: %d\n",mn);
    printf("Posicao: %d",mnI);
    
    return 0;
}