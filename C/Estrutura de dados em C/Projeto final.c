/* 
 Codigo referente ao projeto final de Estrutura de Dados em C.
 Feito em 13/06/2022 por natanmoraes5388@gmail.com / github @Natan5388
 Codigo feito inteiramente por mim. com base nas aulas e requisitos passados pelo professor
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct{
   int num, nivel;
   struct Dados *direita, *esquerda;
}Dados;
//Variaveis globais
int contador;

//Declaração das funções
int inserir(Dados *arvore, int contador, int vazio , int num);
Dados * selecionar();//buscar um nó, buscar o pai de um nó; buscar o filho de um nó; buscar todos os nós de um determinado nível.
int vazia(Dados *arvore);
Dados * criar(Dados *raiz);

int main(){
   Dados *raiz;   //Criando ponteiro para raiz da arvore
   raiz = NULL;   //Valor inicializado em NULL para indicar que ela ainda n foi criada;
   raiz = criar(raiz);
}

Dados * selecionar(Dados *arvore){
   //Definindo ponteiros e variaveis para operação
   char ope;
   Dados *auxEsq = NULL, *auxDir = NULL, *cursor = arvore;
   auxEsq = cursor->esquerda; 
   auxDir = cursor->direita;
   //loop da navegação manual pela arvore
   do{
      printf("Selecione uma das opções 'E' para esquerda e 'D' para direita");
      printf("ou qualquer outra para manter seleção atual\n");
      printf(">>> Atual: %d no nivel %d <<<\n", cursor->num, cursor->nivel);
      printf("Esquerda %d  |  %d Direita\n", auxEsq->num, auxDir->num);
      scanf("%c", &ope);
      toupper(ope);
      //Desvio condicional de navegação pela arvore
      if (ope == 'E')
      {
         cursor = auxEsq;
         auxEsq = cursor->esquerda;
         auxDir = cursor->direita;
      }
      if (ope == 'D')
      {
         cursor = auxDir;
         auxEsq = cursor->esquerda;
         auxDir = cursor->direita;
      }
      system("cls");
   } while (ope == 'E' || ope == 'D');
   return cursor;
}

Dados * criar(Dados *raiz){
   Dados *raizRetorno;
   if (raiz == NULL)
   {
      Dados *raizRetorno = malloc(sizeof(Dados));
      raizRetorno->esquerda = NULL;
      raizRetorno->esquerda = NULL;
      return raizRetorno;
   }
   printf("Arvore ja criada\n");
}

int inserir(Dados *arvore, int contador, int vazio , int num){
   Dados *pai = arvore, *aux;
   //Primeiro checa se é maior ou menor e desvia e verifica conteudo
   if (vazio == 1)               //Condição de saida da recursão
   {
      printf("Inserido com sucesso!\n");
      return 1; 
   } else {
      if (num < pai->num){          //caso menor que
         aux = pai->esquerda;
         if (aux == NULL){
            vazio = 1;              //Define a "flag" para sair do loop
            //Codigo de inserção
            Dados *novo = malloc(sizeof(Dados));
            novo->num = num;
            novo->nivel = contador;
            pai->esquerda = novo;
            pai->direita = NULL;
         }      
      } 
      if (num > pai->num){          //Caso maior que   
         aux = pai->direita;
         if (aux == NULL){
            vazio = 1;              //Define a "flag" para sair do loop
            //Codigo de inserção
            Dados *novo = malloc(sizeof(Dados));
            novo->num = num;
            novo->nivel = contador;
            pai->esquerda = NULL;
            pai->direita = novo;
         }  
      }
      contador++;
      inserir(aux, contador, vazio, num);            //Chamada Recursiva
   }
}

int vazia(Dados *arvore){
   if (arvore == NULL){
      printf("Arvore Não criada\n");
      return 1;
   } else {
      printf("Arvore OK...\n");
      return 0;
   }   
}
