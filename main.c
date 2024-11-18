#include <stdio.h>
#include "modulo.h"

int main(){
    int op,tIdade,Tref;
    char tNome[30];
    //no *lista = NULL;
    Lista lista;
    inciar_lista(&lista);
    do{
        printf("1 - Imprimir lista\n2 - Inserir no inicio\n3 - Inserir no meio\n4 - Inserir no fim\n");
        printf("5 - ENCERRAR\nDigite a opcao que deseja: ");
        scanf("%d",&op);
        switch (op){
        case 1:
            imprimir_lista(&lista);
            break;
        case 2:
            printf("Digite o nome do usuario: ");
            scanf("%s",tNome);
            printf("Digite a idade do usuario: ");
            scanf("%d",&tIdade);
            inserir_inicio(&lista,tIdade,tNome);
            
            break;
        case 3:
            printf("Digite o nome do usuario: ");
            scanf("%s",tNome);
            printf("Digite a idade do usuario: ");
            scanf("%d",&tIdade);
            printf("Digite apos que ID deseja inserir: ");
            scanf("%d",&Tref);
            inserir_meio(&lista,tIdade,tNome,Tref);
            break;
        case 4:
            printf("Digite o nome do usuario: ");
            scanf("%s",tNome);
            printf("Digite a idade do usuario: ");
            scanf("%d",&tIdade);
            inserir_final(&lista,tIdade,tNome);
            
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