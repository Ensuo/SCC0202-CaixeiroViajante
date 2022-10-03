#ifndef LISTA_H
    #define LISTA_H

    #include <stdbool.h>
    
    typedef struct lista_ LISTA;

    typedef struct Node{
        int id;
        Node* conectados;
    }Node;

    LISTA *lista_criar(void);
    bool lista_inserir(LISTA *lista, Node *node);
    Node *lista_remover(LISTA *lista, int chave);
    bool lista_apagar(LISTA **lista);
    Node*lista_busca(LISTA *lista, int chave);
    int lista_tamanho(LISTA *lista);
    bool lista_vazia(LISTA *lista);
    bool lista_cheia(LISTA *lista);
    void lista_imprimir(LISTA *lista);

#endif