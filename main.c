#include <stdio.h>
#include "modulo.h"

int main(){
    int op,tId,tIdade,Tref;
    char tNome[30];
    no *lista = NULL;
    do{
        printf("1 - Imprimir lista\n2 - Inserir no inicio\n3 - Inserir no meio\n4 - Inserir no fim\n");
        printf("5 - ENCERRAR\nDigite a opcao que deseja: ");
        scanf("%d",&op);
        switch (op){
        case 1:
            //imprimir_lista();
            break;
        case 2:
            printf("Digite o ID do usuario: ");
            scanf("%d",&tId);
            printf("Digite o nome do usuario: ");
            scanf("%s",tNome);
            printf("Digite a idade do usuario: ");
            scanf("%d",&tIdade);
            inserir_inicio(&lista,tId,tIdade,tNome);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            printf("\nEncerrando programa...");
            return 0;
            break;
        default:
            break;
        }
    }while(op!=5);

    return 0;
}