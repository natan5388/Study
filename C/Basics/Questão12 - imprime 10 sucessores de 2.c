/*
 * Arquivo: Questão12 - imprime 10 sucessores de 2.c
 * Data: Monday, 27th April 2020 7:26:44 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: imprime 10 sucessores de 2
 */

#include <stdio.h>
#include <stdlib.h>

int i,res;

int main(){
    for (i = 1; i <= 10; i++)
    {
        res = 2 + i ;
        printf("o sucessor n %d de 2 e...: %d\n",i,res);
    }
    
return 0;
}