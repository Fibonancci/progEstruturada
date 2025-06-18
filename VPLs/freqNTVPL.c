#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=0;
    int *vet, freq[11]={0};
    
    scanf("%d",&N);
    vet = (int *) malloc(N*sizeof(int));
    
    for(int i=0;i<N;i++){
        scanf("%d",&vet[i]);
    }
    
    for(int i=0;i<N;i++){
        freq[vet[i]]+=1;
    }
    
    for(int i=0;i<11;i++){
        printf("%d ",freq[i]);
    }
    
    return 0;
}