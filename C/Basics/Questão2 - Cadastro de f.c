/*
 * Arquivo: Questã2 - Cadastro de f.c
 * Data: Sunday, 26th April 2020 12:37:15 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Programa recebe dados e faz cadastro dos funcionarios e eibe o resultado 
 */

#include <stdio.h>
#include <stdlib.h>

int matr,salar,depend,percet, DD, MM, YY;
char nome[50], empresa[20], cargo[10];

int main() {  //Entradas
    printf("Digite sua Matricula:\n");
    scanf("%d",&matr);
    printf("Digite seu nome use [_]:\n");
    scanf("%s",&nome);
    printf("Digite sua empresa:\n");
    scanf("%s",&empresa);
    printf("Digite quantidade de dependentes:\n");
    scanf("%d",&depend);
    printf("Digite sua Data de adimissao: formato -> [DD MM ANO] em linhas diferentes:\n");
    scanf("%d",&DD);
    scanf("%d",&MM);
    scanf("%d",&YY);
    printf("digite seu cargo e parte (porcetagem em numero) de funcao [Cargo porct]\n");
    scanf("%s %d",&cargo, &percet);
        system("cls");
    //Fim entradas
    //impressão dos dados
    printf("=============================================================\n");
    printf("|                 INFORMACOES DO FUNCIONARIO                |\n");
    printf("=============================================================\n");
    printf("| Matricula....: %d       \n",matr);
    printf("=============================================================\n");
    printf("| NOME.........: %s       \n",nome);
    printf("=============================================================\n");
    printf("| EMPRESA......: %s       \n",empresa);
    printf("=============================================================\n");
    printf("| QUANT DE DEPENDENTES: %d \n",depend);
    printf("=============================================================\n");
    printf("| DATA DE ADMISSAO.....: %d / %d / %d /  \n",DD, MM, YY);
    printf("=============================================================\n");
    printf("| CARGO:   %s    Percetangem de funcao:   %d   \n",cargo,percet);
    printf("=============================================================\n");
system("pause");
}