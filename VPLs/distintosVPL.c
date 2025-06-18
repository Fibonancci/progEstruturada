#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetX;
    int N=0,atual=0,achei=0;
    
    scanf("%d",&N);
    vetX = (int *) malloc(N*sizeof(int));
    
    for(int i=0;i<N;i++){
        achei=0;
        scanf("%d",&vetX[i]);
        atual=vetX[i];
        
        for(int j=0;j<i && !achei;j++){
            if(atual==vetX[j]){
                i--;
                achei=1;
            }
        }
    }

    for(int i=0;i<N;i++){
        printf("%d ",vetX[i]);
    }

    return 0;
}