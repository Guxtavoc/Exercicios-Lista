//DEFININDO A STRUCT COM OS DADOS DESEJADOS
typedef struct modulo{
    int id, idade;
    char nome[30];
    //DEFININDO UMA STRUCT PARA APONTAR PARA O PROXIMO NÓ
    struct modulo *proximo;    
}no;
void inserir_inicio(no **lista, int Idade, char Nome[]);
void inserir_final(no **lista, int Idade, char Nome[]);
void inserir_meio(no **lista,int Idade,char Nome[],int ref);
void imprimir_lista(no *no);