#ifndef LISTA_H
    #define LISTA_H

    #include "no.h"
    #include <stdbool.h>

    typedef struct lista_ list;

    list *lista_criar(void);
    bool lista_inserir(list *lista, int dist, int id);
    //No* lista_remover(list *lista, int id);dsadasd
    bool lista_apagar(list **lista);
    //No* lista_busca(list *lista, int id);
    int lista_tamanho(list *lista);
    bool lista_vazia(list *lista);
    // bool lista_cheia(list *lista);
    // void lista_imprimir(list *lista);
    // int distancia_nodes(list *lista, Node* a, Node* b);

#endif
