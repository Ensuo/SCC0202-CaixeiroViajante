#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no_{
    ITEM *item;
    NO *proximo;
};
typedef no_ NO;

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

bool lista_inserir(LISTA *lista, int chave){
    NO *novo_no;
    novo_no = malloc(1*sizeof(NO));

    novo_no->item = item;
    novo_no->novo = NULL;

    lista->fim->proximo = novo_no
    lista->fim = novo_no;
    lista->tamanho++;
}

NO *lista_remover(LISTA *lista){


}
bool lista_apagar(LISTA **lista){

}

int lista_tamanho(LISTA *lista){

}

bool lista_vazia(LISTA *lista){

}

int distancia_nodes(list *lista, Node* a, Node* b){

}
