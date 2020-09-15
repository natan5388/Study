/*
    Name: Calculadora simples Pratica 5
    Author: Natan de Moraes Borges
    Date: 08/04/2020 08:40
    Description: Pratica 5 Calculadora simples em função e loop
*/

#include <stdio.h>
#include <stdlib.h>

int num1,num2,ope;
float res;

void telaprincipal(){
    //interface simples de calculadora
    printf("|-----------------------------------------------------|\n");
    printf("|                     CALCULADORA                     |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|        Qual Calculo voce deseja realizar?           |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|1-Adicao | 2-Subtracao | 3-multiplicacao| 4-Divisao  |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|                     5-Encerrar                      |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|                     Digite abaixo                   |\n");
    printf(">>  ");

    scanf("%d",&ope);
}
    //Entrada de valores
    void entradas(){
        printf("Informe o primeiro numero\n");
        scanf("%d",&num1);
        printf("Informe o segundo numero\n");
        scanf("%d",&num2);
    }
    //processamento das operações
    void processamento() {
        
        if(ope == 1) { //operação de soma
            res = num1 + num2 ;
            }
        if(ope == 2) { //operação de subtração
            res = num1 - num2 ;
            }
        if(ope == 3)  { //operação de multiplicação
            res = num1 * num2 ;
            }
        if(ope == 4)  { //operação de divisão
            if(num2 ==0) return;
            res = (float) num1 / num2 ;
            }
        
    }
    //Saida do resultado
    void saida() {
        printf("O Resultado e: %f\n", res);
    }

int main () {
    do {
    telaprincipal();
        if(ope == 1)
        {
            entradas();
            processamento();
            saida();
            system("Pause");
            system("cls");
        }
        if(ope == 2)
        {
            entradas();
            processamento();
            saida();
            system("Pause");
            system("cls");
        }
        if(ope == 3)
        {
            entradas();
            processamento();
            saida();
            system("Pause");
            system("cls");
        }
        if(ope == 4)
        {
            entradas();
            processamento();
            saida();
            system("Pause");
            system("cls");
        }
    
    }    
while(ope != 5);
}
