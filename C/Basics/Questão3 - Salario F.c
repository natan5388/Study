/*
 * Arquivo: Questão3 - Salario F.c
 * Data: Sunday, 26th April 2020 3:27:48 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Calcula o Salario da familia para determinada familia 
 */

#include <stdlib.h>
#include <stdio.h>

char inv;
int i,idad,filhos,aprov;
float sal, benef,salT;

void tela1() {
    printf("Tem mais algum filho? [1-sim 2-não]\n");
    scanf("%d",&i);
}
void entrada() {
    printf("==============Cadatro dos filhos================:\n");
    printf("Qual a idade do seu filho?\n");
    scanf("%d",&idad);
    printf("Ele é invalido?[s/n]\n");
    scanf("%s",&inv);
}
void calculo(){
    while (i == 1)
        {
            entrada();
                if (idad <= 14 || inv == 's')
                {
                    aprov = aprov + 1 ;
                }
                
            tela1();
        }
    benef = aprov  * 23.36 ;
}
int main() {
    printf("CADASTRO DE FAMILIA:\n");
    printf("Qual seu salario?\n");
    scanf("%f",&sal);
    if (sal >= 645.55 && sal <= 971.78)
        {
        tela1();
        calculo();
        }
    salT = sal + benef ;

system("cls");

    printf("RESULTADO DA CONSULTA:\n");
    printf("Beneficio da familia foi %.2f R$ com %d membros aprovados\n",benef, aprov);
    printf("Salario total da familia foi..: %.2f R$\n",salT);

system("pause");
}