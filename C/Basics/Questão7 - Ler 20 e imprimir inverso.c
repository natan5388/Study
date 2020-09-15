/*
 * Arquivo: Questão7 - Ler 20 e imprimir inverso.c
 * Data: Monday, 27th April 2020 12:41:04 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: o algoritmo lê 20 entradas e imprime o inverso 
 */

#include <stdio.h>
#include <stdlib.h>

int i,vet[100];

int main(){
printf("Digite os 20 numeros para o vetor:\n");
    for (i = 0; i <= 19; i++)
    {
        scanf("%d",&vet[i]);
    }
system("cls");
    for (i = 19; i >= 0; i--)
    {
        printf("%d\n",vet[i]);
    }
return 0;   
}