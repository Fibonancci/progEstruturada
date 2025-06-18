#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned int *vetN=0, T=0, pos=0, sub=1,vetR[20];
    
    scanf("%d",&T);
    
    vetN = (unsigned int *) malloc(T*sizeof(unsigned int));
    
    for(int i=0;i<T;i++){
        scanf("%d",&vetN[i]);
        if(vetN[i]>0){
            do{
                sub = pos+sub;
                pos = sub-pos;
                vetR[i]=pos;
            } while (sub<vetN[i]);
            sub=1;
            pos=0;
        } else {vetR[i]=pos;}
    }
    
    for(int i=0;i<T;i++){
        printf("Fib(%d) = %d\n",vetN[i],vetR[i]);
    }
    return 0;
}