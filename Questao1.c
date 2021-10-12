//Questão 1
//n°de matrícula: 21.1.4022; Aluno: Rômulo Júnio Vieira Rocha; Turma: 41

 #include <stdio.h>
 #include <math.h>

 void temp (float Celsius, float *Kelvin, float *Fahrenheit){ //função que converte Celsius para Kelvin e Fahrenheit
    *Kelvin = (Celsius + 273.15); // calculo cara converter Celsius para Kelvin
    *Fahrenheit = ((Celsius * 1.8) + 32); // calculo para converter Celsius para Fahrenheit
}
 int main(){
    float Celsius,Kelvin,Fahrenheit ; // variaveis que receberão os valores das temperaturas 
    printf("Digite um valor em graus Celsius\n");
    scanf("%f", &Celsius);
    temp (Celsius,&Kelvin,&Fahrenheit); // chamado da função para a conversao 
    printf("%.2f Celsius sao iguais a %.2f Kelvin\n",Celsius, Kelvin);
    printf("%.2f Celsius sao iguais a %.2f Fahrenheits \n",Celsius, Fahrenheit);
    return 0;
 }