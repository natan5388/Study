/*
 * Arquivo: Questão13 - imprime antecessores de 20.c
 * Data: Monday, 27th April 2020 8:20:50 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: imprime 10 antecessores de 20
 */

#include <stdlib.h>
#include <stdio.h>

int i,res;

int main(){
    for (i = 1; i < 10; i++)
    {
        res = 20 - i;
        printf("O %d- Sucessor de 20 e...: %d\n",i,res);
    }
    
}