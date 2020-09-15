/*
 * Arquivo: teste File.c
 * Data: Wednesday, 27th May 2020 8:59:40 am
 * Autor: Natan De Moraes Borges (123matheusmoraes321@gmail.com)
 * Descrição: Usando a função file
 */

#include <stdio.h>
#include <stdlib.h>

FILE *arqtext;
char Dir[80], nome[50], curso[50];

int main(){
    printf("SYSTEM: Informe o nome e Diretorio do Arquivo EX [C://Users//BorgesAutocenter//Desktop//ESTACIO//INTRODUÇÃO A C]\n");
    scanf("%s", Dir);
    arqtext = fopen(Dir,"w+");
    if (arqtext == NULL)
    {
        printf("SYSTEM: Leitura / criacao de arquivo falha!\n");
    }
    else
    {
        printf("SYSTEM: Leitura / Criacao do arquivo com sucesso!\n");
        printf("SYSTEM: Informe seu nome\n");
        setbuf(stdin, NULL);
        fgets(nome, 50, stdin);
        printf("SYSTEM: Informe seu curso\n");
        fgets(curso, 50, stdin);

        //parte de dentro do arquivo
        fprintf(arqtext,"================= %d ==================");
        fprintf(arqtext,"Nome do Aluno: %s",nome);
        fprintf(arqtext,"Curso........: %s",curso);
        fclose(arqtext);
    }   
}