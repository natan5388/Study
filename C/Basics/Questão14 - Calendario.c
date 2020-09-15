/*
 * Arquivo: Questão14 - Calendario.c
 * Data: Monday, 27th April 2020 8:26:20 pm
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Descreve o mes de acordo com numero digitado pelo usuario 
 */

#include <stdio.h>
#include <stdlib.h>

int mes,rep;

void entrada(){
    printf("Digite o numero referente ao mes:\n");
    scanf("%d",&mes);
}
void teste(){
    switch (mes){
    case 1:
        printf("O numero %d corresponde ao mes de janeiro\n",mes);
        break;
    case 2:
        printf("O numero %d corresponde ao mes de fevereiro\n",mes);
        break;
    case 3:
        printf("O numero %d corresponde ao mes de março\n",mes);
        break;
    case 4:
        printf("O numero %d corresponde ao mes de abril\n",mes);
        break;
    case 5:
        printf("O numero %d corresponde ao mes de maio\n",mes);
        break;
    case 6:
        printf("O numero %d corresponde ao mes de junho\n",mes);
        break;
    case 7:
        printf("O numero %d corresponde ao mes de julho\n",mes);
        break;
    case 8:
        printf("O numero %d corresponde ao mes de agosto\n",mes);
        break;
    case 9:
        printf("O numero %d corresponde ao mes de setembro\n",mes);
        break;
    case 10:
        printf("O numero %d corresponde ao mes de outubro\n",mes);
        break;
    case 11:
        printf("O numero %d corresponde ao mes de novembro\n",mes);
        break;
    case 12:
        printf("O numero %d corresponde ao mes de dezembro\n",mes);
        break;
    default:
        printf("O numero digitado e invalido\n");
        break;
        }
}
void repeticao(){
    printf("Deseja repetir o processo?[1-sim 0-não] \n");
    scanf("%d",&rep);
}

int main() {
rep = 1;
    while (rep != 0)
    {
        entrada();
        teste();
        repeticao();
        system("cls");
        
    }
return 0;   

}