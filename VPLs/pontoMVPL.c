#include <stdio.h>

int main()
{
    // define variáveis
    int resultado=0;
    float raiz=0.0, radicando=0.0;
    float x1=0.0, x2=0.0, y1=0.0, y2=0.0, vA =0.0, vB =0.0; 
    
    // recebe as coordenadas dos pontos
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    // calcula o radicando da formulá da distância entre os pontos
    radicando = ((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    
    // localiza a maior raiz inteira
    while (resultado < radicando){
        raiz++;
        resultado = raiz * raiz;
    }
    
    // identifica se a raiz é igual ao radicando
    if (resultado != radicando){
        
        // obtem a média entre as raizes inteiras
        raiz = raiz - 0.5;
        
        // aplica o método de Herão
        for (int i=0; i<2; i++) {
            raiz = ((raiz + (radicando/raiz))/2);
        }
    }
    
    //imprime o resultado
    printf("%.4f",raiz);
    
    return 0;
}