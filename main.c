#include <stdio.h>
#include "modulo.h"
#include "menu.h"
int main(){
    //no *lista = NULL;
    Lista lista;
    iniciar_lista(&lista);
    menu_a(&lista);
    return 0;
}