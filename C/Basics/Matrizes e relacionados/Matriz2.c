/*
 * Arquivo: Aula 1.c
 * Data: Monday, 25th May 2020 8:40:46 am
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Breve estudo a matrizes com dimensão fixa e flexivel
 */

#include <stdio.h>
#include <stdlib.h>

int i,j,valor;
int mat1[3][3],mat2[3][3],mat3[3][3];

int main(){
    printf("Informe os valores da matriz\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        scanf("%d",&mat1[i][j]);
    }
    system("cls");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        scanf("%d",&mat2[i][j]);
    }
    system("cls");
//Fim do entrada das 2 primeiras matrizes
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        printf("%4d|",mat1[i][j] + mat2[i][j]);
        printf("\n");
    }
}