#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=0;
    int *vet;
    
    scanf("%d",&N);
    vet = (int *) malloc(N*sizeof(int));
    
    for(int i=0;i<N;i++){
        scanf("%d",&vet[i]);
    }
    
    for(int i=0;i<N;i++){
        if(i==0){
            printf("%d ",vet[N-1]);
        } else{
            printf("%d ",vet[i-1]);
        }
    }
    return 0;
}