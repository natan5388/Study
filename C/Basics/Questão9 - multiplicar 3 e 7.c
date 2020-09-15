/*
 * Arquivo: Questão9 - multiplicar 3 e 7.c
 * Data: Monday, 27th April 2020 7:02:45 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: esse algoritmo multiplica as entradas nº 3 e 7
 */

#include <stdlib.h>
#include <stdio.h>

int i,res,vet[50];

int main() {
printf("Insira os 10 numeros que ocuparao o vetor\n");
    
    for (i=0 ;i<10 ;i++)
    scanf("%d",&vet[i]);

res = vet[3] * vet[7];
printf("O resultado da multiplicacao do vetor n3 (%d) e n7 (%d) e %d\n",vet[3],vet[7],res);

}
