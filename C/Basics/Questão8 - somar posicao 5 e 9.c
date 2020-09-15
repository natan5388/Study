/*
 * Arquivo: Questão8 - somar posicao 5 e 9.c
 * Data: Monday, 27th April 2020 7:02:45 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Esse algoritmo soma as entradas de numero 5 e 9
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i,vet[50],res;

int main()
{
printf("Digite os valores que ocuparao os vetores:\n");
    for (i=0 ; i < 10; i++)
    {
        scanf("%d",&vet[i]);
    }
res = vet[5] + vet[9];
printf("O Resultado da soma da posicao 9 e 5 e: %d ",res);
return 0;
}

