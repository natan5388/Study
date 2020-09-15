/*
 * Arquivo: Questão16 - Imc.c
 * Data: Tuesday, 28th April 2020 2:30:54 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: calcula o imc e fornece o resultado ao usuario
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float imc,peso,alt;

int main(){
//Entrada dos valores
    printf("==============TESTE SEU GRAU DE OBESIDADE==============\n");
    printf("INSIRA SEU PESO:\n");
    scanf("%f",&peso);
    printf("Insira sua altura em M ex [1.70]:\n");
    scanf("%f",&alt);
system("cls");
//Parte relacionada ao calculo do imc e exibição dos resultados
imc =(float) peso / (alt * alt);
    if (imc < 26)
    {
        printf("Seu imc e %f considerado normal\n",imc);
    }
    if (imc > 26 && imc < 30)
    {
        printf("Seu imc e %f considerado obeso\n",imc);
    }
    if (imc > 30)
    {
        printf("Seu imc e %f considerado obeso morbido\n",imc);
    }
system("pause");
}




