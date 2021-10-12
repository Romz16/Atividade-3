//Questão 2
//n°de matrícula: 21.1.4022; Aluno: Rômulo Júnio Vieira Rocha; Turma: 41

#include <stdio.h>
#include <math.h>
 float calculaRaizes (float *delta, float a, float b, float c){
 *delta = (pow(b,2) - (4 * a * c));
 if (*delta >= 0)
 {
    float x1,x2;
    x1 = (((-b) + sqrt(*delta)) / 2 * a) ; /* code */
    x2 = (((-b) - sqrt(*delta)) / 2 * a) ; /* code */
    printf("Os valores das raizes sao: %f , %f \n ", x1 , x2);
    return 1;
 }
 else
  {
    printf(" Nao tem raizes");
    return 0;
 }
 }
 
 int main(){
 
  float a,b,c, delta;
  printf("Digite os valore de a,b e c: \n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  calculaRaizes (&delta,a,b,c);
 }