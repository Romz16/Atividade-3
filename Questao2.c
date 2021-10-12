//Questão 2
//n°de matrícula: 21.1.4022; Aluno: Rômulo Júnio Vieira Rocha; Turma: 41

#include <stdio.h>
#include <math.h>

  float calculaRaizes (float *delta, float a, float b, float c){ //Função responsavel por descobrir as raizes 
  *delta = (pow(b,2) - (4 * a * c)); // calculo para saber o valor de delta 
 
  if (*delta >= 0) // caso delta seja maior ou igual a  0
  {
    float x1,x2;
    x1 = (((-b) + sqrt(*delta)) / (2 * a)) ; /*  calculo para saber o valor de uma das raizes  */
    x2 = (((-b) - sqrt(*delta)) / (2 * a)) ; /* calculo para saber o valor de uma das raizes */
    printf("Os valores das raizes sao: %f , %f \n ", x1 , x2);
    return 1; // retornar 1 caso delta seja maior ou iual a 0
 }
  else // caso delta seja menor que 0
  {
    printf(" Nao possui raizes");
    return 0; // retornar 0 caso delta seja mneor que 0
 }
 }
 
 int main(){
 
   float a,b,c, delta; //variaveis que receberão os valores para descobrir as raizes e o delta 
   printf("Digite os valore de a,b e c: \n");
   scanf("%f",&a);
   scanf("%f",&b);
   scanf("%f",&c);
   calculaRaizes (&delta,a,b,c); // chamado da função 
 }