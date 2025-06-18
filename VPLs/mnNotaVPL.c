#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=0,X=0,temp=0,troca=0,achei=0;
    int *vet;
    
    scanf("%d %d",&N,&X);
    vet = (int *) malloc(N*sizeof(int));
    
    for(int i=0;i<N;i++){
        scanf("%d",&vet[i]);
    }
    
    for(int i=0;i<N-1 && !troca;i++){
        troca=0;
        for(int j=0;j<N-1-i;j++){
            if(vet[j]>vet[j+1]){
                temp=vet[j+1];
                vet[j+1]=vet[j];
                vet[j]=temp;
                troca=1;
            }
        }
    }
    for(int i=0;i<X;i++){
        if(vet[i]==vet[i+1]){
            X++;
        }
    }
    
    printf("%d",vet[X-1]);
    
    return 0;
}