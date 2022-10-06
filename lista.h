#ifndef LISTA_H
    #define LISTA_H

    #include "no.h"
    #include <stdbool.h>

    struct lista_{
        NO *inicio;
        NO *fim;
        int tamanho;
    };

    typedef struct lista_ LISTA;


    LISTA *lista_criar(void);
    bool lista_inserir(LISTA *lista, int dist, int id);
    //No* lista_remover(list *lista, int id);dsadasd
    NO* lista_procurar(LISTA *lista, int id);
    bool lista_apagar(LISTA **lista);
    //No* lista_busca(list *lista, int id);
    int lista_tamanho(LISTA *lista);
    bool lista_vazia(LISTA *lista);
    NO* get_inicio(LISTA *lista);
    NO* get_fim(LISTA *lista);
    // bool lista_cheia(list *lista);
    // void lista_imprimir(list *lista);
    // int distancia_nodes(list *lista, Node* a, Node* b);

#endif
