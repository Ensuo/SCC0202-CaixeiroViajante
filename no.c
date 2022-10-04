#include <stdio.h>
#include <stdlib.h>
#include "no.h"

    NO *NO_criar(int id, int dist){
        NO *no;
        no = (NO*) malloc(sizeof(NO));

        if(no != NULL){
            no->cidade_id = id;
            no->distancia = dist;
            return no;
        }
        return NULL;
    }

    int get_id(NO* x){
        return x->cidade_id;
    }

    int get_dist(NO* x){
        return x->distancia;
    }

    bool item_apagar(NO** no){
        if(*no != NULL){
            free(*no);
            *no = NULL;
            return true;
        }
        return false;
    }