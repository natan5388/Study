/*
 * Arquivo: Questão4 - Gratifição.c
 * Data: Sunday, 26th April 2020 5:55:47 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Questão calcula um aumento salarial baseado em uma gratificação de 40% e exibe o resultado final
 */

#include <stdio.h>
#include <stdlib.h>

int sal,grat;
float aume,salf;

int main() {
    printf("Qual seu salario:\n");
    scanf("%d",&sal);
    printf("Voce possui gratificacao?[1-sim/0-nao] \n");
    scanf("%d",&grat);

if (grat == 1)
    {
        salf = sal * 1.4 ;
    }
if (grat != 1)
    {
        salf = sal ;
    }
aume = salf - sal ;

printf("Seu salario final e......: %.2f \n",salf);
printf("O aumento foi de.........: %.2f \n",aume);    

system("pause");
}
