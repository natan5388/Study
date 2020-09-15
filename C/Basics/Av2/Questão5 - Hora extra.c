/*
 * Arquivo: Questão5 - Hora extra.c
 * Data: Sunday, 26th April 2020 6:48:53 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: calcula o valor da hora extra e exibe junto com salario final do trabalhador
 */

#include <stdlib.h>
#include <stdio.h>

int temp,tempEx,sal;
float salH,salT,salEx,Rextra;

void entrada(){
    printf("Qual seu salario?\n");
    scanf("%d",&sal);
    printf("Qual foi sua carga horaria?\n");
    scanf("%d",&temp);
    printf("Quanto tempo de hora extra você fez?\n");
    scanf("%d",&tempEx);
}
void calculo(){
    salH = sal / temp ;
    salEx = salH * 2 ;
    Rextra = salEx * tempEx ;
    salT = Rextra +  sal ;
}
void saida(){
    printf("================================================\n");
    printf("|             RESUMO DO PAGAMENTO              |\n");
    printf("================================================\n");
    printf("| SALARIO NORMAL:  %d R$ \n",sal);
    printf("================================================\n");
    printf("| SALARIO/H EXTRA: %.2f R$  TOTAL: %.2f \n",salEx, Rextra);
    printf("================================================\n");
    printf("| RENDIMENTO TOTAL: %.2f R$\n",salT);
    printf("================================================\n");
}
int main() {
    entrada();
    calculo();
    system("cls");
    saida();
return 0;
}