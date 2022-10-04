#ifndef NO_H
    #define NO_h

    #include <stdbool.h>

    typedef struct no_ NO;

    struct no_{
        int cidade_id;
        int distancia;
        no_* proximo;
    };

    NO *item_criar(int id, int dist);
    int get_id(NO* x);
    int get_dist(NO* x);
    bool item_apagar(NO** item);



#endif