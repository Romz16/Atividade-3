//Questão 2
//n°de matrícula: 21.1.4022; Aluno: Rômulo Júnio Vieira Rocha; Turma: 41

#include <stdio.h>
#include <math.h>

void tempojogo( int *tempo, int hora,int minuto, int horaf, int minutof){ //funÇão para calcular tempo de jogo
    if ((hora *60 + minuto) == (horaf *60 + minutof)) /* Caso se tenha terminado o jogo no dia seguinte no mesmo horario,
    com horas e minutos iguais*/
    {
       *tempo = 24 * 60 ;  
    }
     else if ((hora *60 + minuto) > (horaf *60 +minutof) ) /*Caso a hora final seja  menor que a hora inicial significa 
     que o jogo foi finalizado no dia seguinte antes de completarem 24 horas de jogo */
     {
        *tempo = ((24 * 60 - (hora * 60 + minuto) ) +  (horaf * 60 + minutof)); 
     }
       
    else if ((horaf *60 + minutof) > (hora *60 + minuto)) /* A  hora final ser maior que a hora inicial siginifica
     que o jogo foi finalizado no mesmo dia em que se iniciou */
    {
      *tempo = ((horaf * 60 + minutof) - (hora * 60 + minuto))  ;  
    }
    
}

int main() {
   int hora, minuto, horaf, minutof, tempo;
   printf("Informe hora e minuto  de inicio de jogo:\n");
   scanf("%d %d", &hora, &minuto);
   printf("Informe hora e minuto  de fim de jogo:\n");
   scanf("%d %d ", &horaf, &minutof);
   tempojogo( &tempo, hora, minuto, horaf, minutof);
   printf("Passaram-se %d minutos ", tempo ) ;
}