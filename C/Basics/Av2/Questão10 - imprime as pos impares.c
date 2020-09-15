/*
 * Arquivo: Questão10 - imprime as pos impares.c
 * Data: Monday, 27th April 2020 7:07:58 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Esse algoritmo recebe tres valores e imprime somente os em posições impares (De acordo com enunciado da questão)
 */

#include <stdio.h>
#include <stdlib.h>

int i,vet[20];
float res;

int main() {
    printf("Digite os valores para povoar o vetor\n");
        for (i=1;i < 4;i++) {
            scanf("%d",&vet[i]);
        }
    printf("Os valores %d e %d estão ocupando as posicoes impares",vet[1],vet[3]);
return 0;
}