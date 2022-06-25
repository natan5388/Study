#include <stdio.h>
#include <stdlib.h>

typedef struct Arvore{
   int num, nivel;
   struct Arvore *esq, *dir;
}Noh;

//Decalaracao da funcoes
Noh* criarArvore(Noh *raiz);
int vazia(Noh *raiz);
Noh* inserir(Noh *raiz, int dado);
Noh* inserir2(Noh *raiz, int dado, int NIVEL);

int main(){
   Noh *r;           //Noh raiz da arvore
   Noh *result;
   int num, select, existe;  //Variaveis aux

   r = criarArvore(r);
   r = inserir(r,5);
   existe = vazia(r);
   printf("\nExiste: %d", existe);
   inserir2(r, 5, 0);                         //Falha esperada numero já existente(ok)
   result = inserir2(r, 6, r->nivel);
   result = inserir2(r, 3, r->nivel);

   free(r);
}

Noh* criarArvore(Noh *raiz){
   raiz = NULL;
   printf("Criar arvore: Arvore criada raiz nula!");
   return raiz;         //Retorna NULL 'raiz criada'
}

int vazia(Noh *raiz){
   if (raiz == NULL){
      printf("\nVAzia: Raiz vazia!");
      return 0;
   } else {
      printf("\nRaiz nao vazia");
      return 1;
   }
}
//Inserções diversas
Noh* inserir(Noh *raiz, int dado){
   if (raiz == NULL){
      Noh *novo = (Noh*)malloc(sizeof (Noh));
      novo->esq = NULL;
      novo->dir = NULL;
      novo->num = dado;
      novo->nivel = 0;
      printf("\nInserir: Inserido na raiz OK;");
      return novo;  
   }
   printf("\nInserir:Raiz não nula a insercao na raiz falhou!");
   return raiz;      //Retorna propria raiz caso seja alocada ou não um noh para ela
}
Noh* inserir2(Noh *raiz, int dado, int NIVEL){
   if (raiz != NULL && dado == raiz->num){
      printf("\nInserir2: Falha! Numero ja existe na arvore.");
      return raiz;
   } else {      //Se não for igual ao noh
      if (raiz == NULL){               //Econtrado espaço vazio e inserindo e saida da recursividade
         printf("\nNoh vazio e lado encontrado tentando inserir!");
         Noh *novo = (Noh*)malloc(sizeof(Noh));
         novo->dir = NULL;
         novo->esq = NULL;
         novo->num = dado;
         novo->nivel = NIVEL;
         raiz = novo;
         printf("\nInsercao OK.");
         return novo;
      } else {
         if (dado < raiz->num){
            printf("\nIns2:Passando raiz esquerda recursivamente");
            inserir2(raiz->esq, dado, NIVEL+1);
         }
         if (dado > raiz->num){
            printf("\nIns2:Passando raiz direita recursivamente");
            inserir2(raiz->dir, dado, NIVEL+1);
         }
      }
   }   
}
//Função Buscar
Noh* buscar(Noh *raiz, int num, int opt){
   if (raiz == NULL){
      return NULL;
   }else{
      if (opt == 1){
         /* a fazer */
      }
      if (opt == 2){
         /* a fazer */
      }
      if (opt == 3){
         /* a fazer */
      }
      if (opt == 4){
         /* a fazer */
      }
   }  
}


