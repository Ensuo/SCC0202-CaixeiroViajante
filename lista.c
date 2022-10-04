#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct lista_{
    NO *inicio;
    NO *fim;
    int tamanho;
};
typedef lista_ LISTA;

LISTA *lista_criar(void){
    LISTA *lista;
    lista = malloc(1*sizeof(LISTA));

    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;

    return(lista);
}

bool lista_inserir(LISTA *lista, int dist, int id){
    NO *novo_no;
    novo_no = no_criar(id, dist);

    lista->fim->proximo = novo_no;
    set_proximo(lista->fim, novo_no);
    lista->tamanho++;
}

int lista_tamanho(LISTA *lista){
    return(lista->tamanho);
}

bool lista_vazia(LISTA *lista){
    return lista_tamanho(lista) == 0
}

bool lista_apagar(LISTA **lista){
    NO *temp = (*lista)->inicio; //Guarda o antigo início 
    (*lista)->inicio = temp->proximo; //Novo início é o próximo do antigo início
    no_apagar(temp); //Elimina o no do antigo início

    (*lista)->tamanho--; 
    
    return lista_vazia ? true : lista_apagar(lista); //Se a toda a lista foi removida, entao retornar true, caso contrário chamar recursivamente a função lista_apagar()
}


