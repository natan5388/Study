/*
 * Arquivo: Questão1 - Calculadora.c
 * Data: Saturday, 25th April 2020 9:04:07 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Criar uma calculadora com as 4 operações e que trabalhe com até 3 numeros
 */

#include <stdio.h>
#include <stdlib.h>

int ope;
float num1,num2,num3,res;

void entrada1() {
    printf("==============================================================\n");
    printf("|              CALCULADORA DE ATE 3 ENTRADAS                 |\n");
    printf("==============================================================\n");
    printf("|              SELECIONE A OPERACAO DESEJADA:                |\n");
    printf("==============================================================\n");
    printf("| 1 - SOMA | 2 - SUBTRACAO | 3 - MULTIPLICACAO | 4 - DIVISAO |\n");
    printf("==============================================================\n");
    printf("|     PRESIONA QUALQUER OUTRA TECLA PARA SAIR DO PROGRAMA    |\n");
    printf("==============================================================\n");
    printf(">>>   ");
    scanf("%d",&ope);
}
void entrada2() {
    printf("Digite os 3 numeros para operacao um abaixo do outro diferente de 0\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
}
//Operações e suas funções
void soma() {
    res = num1 + num2 + num3 ;
}
void subt() {
    res =(float) (num1 - num2) - num3 ;
}
void mult() {
    res = num1 * num2 * num3 ;
}
void divi() {
    res =(float) (num1 / num2) / num3 ;
}
void saida() {
    printf("O Resultado e  %.2f\n",res);
}
//Fim das operações
int main() {
    entrada1();
    while (ope <= 4 && ope != 0)
    {
        entrada2();
        switch (ope)
        {
        case 1:
            soma();
            break;
        case 2:
            subt();
            break;
        case 3:
            mult();
            break;
        case 4:
            divi();
            break;
        default:
            break;
        }
        system("cls");
        saida();
        system("pause");
        system("cls");
        entrada1(); 
    }
return 0;
}
