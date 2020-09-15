/*
 * Arquivo: Questão15 - Raiz quadrada.c
 * Data: Tuesday, 28th April 2020 1:34:34 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: calcula raiz de numero maior que zero
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,num;
float res;

void entrada(){
    printf("Digite o valor para calcular a raiz:\n");
    scanf("%d",&num);
}
void repetir(){
    printf("Deseja testar outro numero?[1=sim / pressione qualquer outra tecla para cancelar]\n");
    scanf("%d",&i);
}
void calculo(){
    res = sqrt(num);
}
void saida(){
    printf("A raiz de %d e...: %f \n",num,res);
}
int main(){
i=1;
    while (i == 1)
    {
    entrada();
    calculo();
    saida();
    system("pause");
    repetir();
    system("cls");
    }
}