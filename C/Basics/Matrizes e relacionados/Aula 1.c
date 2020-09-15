/*
 * Arquivo: Aula 1.c
 * Data: Monday, 25th May 2020 8:40:46 am
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Breve estudo a matrizes com dimensão fixa e flexivel
 */

#include <stdio.h>
#include <stdlib.h>

int i,j,valor;
int mat[2][2];

int main(){
    printf("Informe os valores da matriz\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        scanf("%d",&mat[i][j]);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        printf("%4d|",mat[i][j]);
        printf("\n");
    }
}