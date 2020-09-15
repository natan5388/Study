/*
 * Arquivo: Questão6 - Quadrado da posição.c
 * Data: Monday, 27th April 2020 8:33:51 am
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: vetor com 30 numeros em que cada numero é o quadrado da posição onde se encontra
 */

#include <stdio.h>
#include <stdlib.h>

int i,vet[50];

int main(){

    for (i = 1; i <= 30; i++)
    {
        vet[i] = i * i ;
        printf("%d\n",vet[i]);
    }
return 0;    
}