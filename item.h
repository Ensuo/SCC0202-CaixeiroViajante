#ifndef ITEM_H
    #define ITEM_h

    #include <stdbool.h>

    typedef struct item_ ITEM;

    struct item_{
        int cidade_id;
        int distancia;
    };

    ITEM *item_criar(int id, int dist);
    int get_id(ITEM* x);
    int get_dist(ITEM* x);
    bool item_apagar(ITEM** item);



#endif