#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct modulo{
    int id, idade;
    char nome[15];
    struct modulo *proximo;    
}no;

void inserir_inicio(no **lista,int ID, int Idade, char Nome[]){
    no *novo=malloc(sizeof(no));
    if(novo){
        novo->id=ID;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=*lista;
        *lista=novo;
    }else
        printf("Erro ao alocar memoria!\n");
}
//ISERÇÃO NO FINAL DA LISTA (Antes de NULL)
void inserir_inicio(no **lista,int ID, int Idade, char Nome[]){
    no *aux,*novo=malloc(sizeof(no));
    if(novo){
        novo->id=ID;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=NULL;
        if(*lista==NULL)
            *lista=novo;
        else{
            aux = *lista;
            while(aux->proximo!=NULL)
                aux=aux->proximo;
            aux->proximo=novo;
        }
    }else
        printf("Erro ao alocar memoria!\n");
}
void inserir_meio(no **lista,int ID,int Idade,char Nome[],int ref){
    no *aux,*novo=malloc(sizeof(no));
    if(novo){
        novo->id=ID;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=NULL;
        if(*lista==NULL){
            novo->proximo=NULL;
            *lista=novo;
        }
        else{
            aux = *lista;
            while(aux->id!=ref && aux->proximo!=NULL)
                aux=aux->proximo;
            novo->proximo=aux->proximo;
            aux->proximo=novo;
        }
    }else
        printf("Erro ao alocar memoria!\n");
}