#ifndef LISTA_H
    #define LISTA_H

    #include "no.h"
    #include <stdbool.h>

    typedef struct lista_ list;

    list *lista_criar(void);
    bool lista_inserir(list *lista, int dist, int id);
    //lista_remover(list *lista, int id);
    bool lista_apagar(list **lista);
    //lista_busca(list *lista, int id);
    int lista_tamanho(list *lista);
    bool lista_vazia(list *lista);
    void lista_imprimir(list *lista);
    //intdistancia_nodes(list *lista, NO* a, NO* b)

#endif
