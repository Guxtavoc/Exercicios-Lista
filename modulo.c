#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DEFININDO A STRUCT COM OS DADOS DESEJADOS
typedef struct modulo{
    int id, idade;
    char nome[15];
    //DEFININDO UMA STRUCT PARA APONTAR PARA O PROXIMO NÓ
    struct modulo *proximo;    
}no;

//FUNÇÕES DE INSERÇÃO
//ISERÇÃO NO INICIO DA LISTA (ANTES DO INICIO)
//DEFININDO A FUNÇÃO E SEUS ARGUMENTOS
void inserir_inicio(no **lista,int ID, int Idade, char Nome[]){
    //Criando uma variavel do tipo no com memoria dinamicamente alocada
    no *novo=malloc(sizeof(no));
    //Verificação se a memoria foi alocada corretamente
    if(novo){
        //Atribuindo os dados a struct 
        //NOTA!!!! como estamos atribuindo um valor a um endereço, utilizamos o operador "->"
        novo->id=ID;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=*lista;//O novo nó apontará para o (antigo) inicio da lista
        *lista=novo;// Definindo que o (novo) inicio será a variavel novo
    }else
        printf("Erro ao alocar memoria!\n");
}
//ISERÇÃO NO FINAL DA LISTA (Antes de NULL)
void inserir_final(no **lista,int ID, int Idade, char Nome[]){
    //Declarando uma variavel para auxiliar a percorrer a lista sem risco de comprometer informações
    no *aux,*novo=malloc(sizeof(no));
    if(novo){
        novo->id=ID;
        novo->idade=Idade;
        strcpy(novo->nome,Nome);
        novo->proximo=NULL;
        //Verificação para identificar se esse nó é o primeiro da lista
        if(*lista==NULL)
            *lista=novo;//Se sim, é definido como inicio
        else{
            aux = *lista;//Aux vai receber os parametros do inicio da lista
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
void inserir_meio(no **lista,int ID, int Idade, char Nome[],int ref){
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
            while(aux->proximo!=ref)
                aux=aux->proximo;
            aux->proximo=novo;
        }
    }else
        printf("Erro ao alocar memoria!\n");
}