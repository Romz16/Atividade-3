#include <stdio.h>
#include <math.h>

void dist(float metros, float *jardas, float *pes,float *polegadas){
    *jardas = (metros * 1.094);
    *pes = (metros * 3.281);
    *polegadas = ( metros * 39.3701);
}

int main(){
    float metros,jardas,pes,polegadas ;
    printf("Digite um valor em metros");
    scanf("%f", &metros);
    dist (metros, &jardas, &pes, &polegadas);
    printf("%.2f metros sao iguais a %.2f jardas\n",metros, jardas);
    printf("%.2f metros sao iguais a %.2f pes\n",metros, pes);
    printf("%.2f metros sao iguais a %.2f polegadas\n",metros, polegadas);
    return 0;
}