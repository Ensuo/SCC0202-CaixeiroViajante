#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

NO* get_inicio(LISTA *lista){
    return lista->inicio;
}

NO* get_fim(LISTA *lista){
    return lista->fim;
}



LISTA *lista_criar(void){
    LISTA *lista;
    lista = malloc(1*sizeof(LISTA));
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;

    return(lista);
}

NO* lista_procurar(LISTA *lista, int id){
    NO* inicio = get_inicio(lista);
    if(inicio){
        while(get_id(inicio) != id && inicio != NULL){
            inicio = inicio->proximo;
        }
    }

    return inicio;
}

bool lista_inserir(LISTA *lista, int dist, int id){
    //Adicionar um check se o fim existe. Caso exista, só adiciona no prox, caso contrario fim é novo no
    NO *novo_no;
    novo_no = no_criar(id, dist);

    if(lista->inicio == NULL){
        lista->inicio = novo_no;
    }else{
        lista -> fim -> proximo = novo_no;
    }
    

    lista->fim = novo_no;
    lista->tamanho++;

    return true;
}

int lista_tamanho(LISTA *lista){
    return(lista->tamanho);
}

bool lista_vazia(LISTA *lista){
    return lista_tamanho(lista) == 0;
}

bool lista_apagar(LISTA **lista){
    NO *temp = (*lista)->inicio; //Guarda o antigo início
    (*lista)->inicio = temp->proximo; //Novo início é o próximo do antigo início
    no_apagar(&temp); //Elimina o no do antigo início

    (*lista)->tamanho--;

    return lista_vazia ? true : lista_apagar(lista); //Se a toda a lista foi removida, entao retornar true, caso contrário chamar recursivamente a função lista_apagar()
}
