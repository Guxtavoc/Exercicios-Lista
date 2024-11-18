//DEFININDO A STRUCT COM OS DADOS DESEJADOS
typedef struct modulo{
    int id, idade;
    char nome[30];
    //DEFININDO UMA STRUCT PARA APONTAR PARA O PROXIMO NÓ
    struct modulo *proximo;    
}no;
//DEFININDO UMA STRUCT PARA CONTER O INICIO E CONTROLAR OS IDS DA LISTA
typedef struct{
    no *inicio;
    int id;
}Lista;
void inciar_lista(Lista *lista);
void inserir_inicio(Lista *lista, int Idade, char Nome[]);
void inserir_final(Lista *lista, int Idade, char Nome[]);
void inserir_meio(Lista *lista,int Idade,char Nome[],int ref);
void imprimir_lista(Lista *lista);