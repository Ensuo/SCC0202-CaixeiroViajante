#include <stdio.h>
#include <stdlib.h>
#include "item.h"

    ITEM *item_criar(int id, int dist){
        ITEM *item;
        item = (ITEM*) malloc(sizeof(ITEM));

        if(item != NULL){
            item->cidade_id = id;
            item->distancia = dist;
            return item;
        }
        return NULL;
    }

    int get_id(ITEM* x){
        return x->cidade_id;
    }

    int get_dist(ITEM* x){
        return x->distancia;
    }

    bool item_apagar(ITEM** item){
        if(*item != NULL){
            free(*item);
            *item = NULL;
            return true;
        }
        return false;
    }