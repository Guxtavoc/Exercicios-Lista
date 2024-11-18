#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modulo.h"
//FUNÇÕES DE INSERÇÃO
//ISERÇÃO NO INICIO DA LISTA (ANTES DO INICIO)
//DEFININDO A FUNÇÃO E SEUS ARGUMENTOS
int ID=0;
void inciar_lista(Lista *lista){
    lista->inicio=NULL;
    lista->id=0;
}
void inserir_inicio(Lista *lista, int Idade, char Nome[]){
    //Criando uma variavel do tipo no com memoria dinamicamente alocada
    no *novo=malloc(sizeof(no));
    //Verificação se a memoria foi alocada corretamente
    if(novo){
        //Atribuindo os dados a struct 
        //NOTA!!!! como estamos atribuindo um valor a um endereço, utilizamos o operador "->"
        novo->id=lista->id;
        lista->id++;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=lista->inicio;//O novo nó apontará para o (antigo) inicio da lista
        lista->inicio=novo;//Definindo que o (novo) inicio será a variavel novo
    }else
        printf("Erro ao alocar memoria!\n");
}
//ISERÇÃO NO FINAL DA LISTA (Antes de NULL)
void inserir_final(Lista *lista, int Idade, char Nome[]){
    //Declarando uma variavel para auxiliar a percorrer a lista sem risco de comprometer informações
    no *aux,*novo=malloc(sizeof(no));
    if(novo){
        novo->id=lista->id;
        lista->id++;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=NULL;
        //Verificação para identificar se esse nó é o primeiro da lista
        if(lista->inicio==NULL)
            lista->inicio=novo;//Se sim, é definido como inicio
        else{
            aux = lista->inicio;//Aux vai receber os parametros do inicio da lista
            //Laço para identificar o nó cujo proximo é NULL (fim da lista)
            while(aux->proximo!=NULL)
                aux=aux->proximo;
            //Atribuindo o endereço do nó final a seu antecessor
            aux->proximo=novo;
        }
    }else
        printf("Erro ao alocar memoria!\n");
}
//INSERÇÃO NO MEIO DO VETOR (apos um valor especifico)
void inserir_meio(Lista *lista,int Idade,char Nome[],int ref){
    no *aux,*novo=malloc(sizeof(no));
    //Verificando se a memoria foi alocada e em seguida atribuindo os valores a variavel
    if(novo){
        novo->id=lista->id;
        lista->id++;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=NULL;
        //Verificando se há algum item na lista, caso não haja o este este se torna o primeira
        if(lista->inicio==NULL){
            novo->proximo=NULL;
            lista->inicio=novo;
        }
        else{
        //Caso já existam itens na lista, o programa parte para a busca do referencial passado
            aux = lista->inicio;//Atribuindo o valor de lista a uma variavel auxiliar para não comprometer o inicio da lista
            while(aux->id!=ref && aux->proximo!=NULL)//Caso o valor de referencia não seja encontrado o item será adiocionado no fim da lista
                aux=aux->proximo;
            //criando o elo entre o item criado com os demais itens da lista
            novo->proximo=aux->proximo;
            aux->proximo=novo;
        }
    }else
        printf("Erro ao alocar memoria!\n");
}
//Função para a impressão dos itens da lista
void imprimir_lista(Lista *lista){
    no *atual=lista->inicio;
    while(atual!=NULL){
        printf("|ID - %d|Nome - %s|Idade - %d|\n",atual->id,atual->nome,atual->idade);
        atual=atual->proximo;
    }
}