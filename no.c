#include <stdio.h>
#include <stdlib.h>
#include "no.h"

NO *no_criar(int id, int dist){
    NO *no;
    no = (NO*) malloc(sizeof(NO));

    if(no != NULL){
        no->cidade_id = id;
        no->distancia = dist;
        no->proximo = NULL;

        return no;
    }
    return NULL;
}

void set_proximo(NO *no, NO *prox){
    no->proximo = prox;
}

int get_id(NO* x){
    return x->cidade_id;
}

int get_dist(NO* x){
    return x->distancia;
}

bool no_apagar(NO** no){
    if(*no != NULL){
        free(*no);
        *no = NULL;
           return true;
    }
    return false;
}
