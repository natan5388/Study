/*
 * Arquivo: Questão11 - Tabuada de 9 div.c
 * Data: Monday, 27th April 2020 7:19:45 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: tabuada de 9 divisão
 */

#include <stdlib.h>
#include <stdio.h>

int i;
float res;

int main(){
    
    for (i = 1; i <= 9; i++)
    {
        res =(float) 9 / i ;
        printf("9 Dividido por %d e..: %.2f\n",i,res);
    }
return 0;
}