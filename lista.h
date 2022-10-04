#ifndef LISTA_H
    #define LISTA_H

    #include "item.h"
    #include <stdbool.h>

    typedef struct lista_ list;

    list *lista_criar(void);
    bool lista_inserir(list *lista, int chave);
    Node *lista_remover(list *lista, int chave);
    bool lista_apagar(list **lista);
    Node*lista_busca(list *lista, int chave);
    int lista_tamanho(list *lista);
    bool lista_vazia(list *lista);
    bool lista_cheia(list *lista);
    void lista_imprimir(list *lista);
    int distancia_nodes(list *lista, Node* a, Node* b);

#endif
