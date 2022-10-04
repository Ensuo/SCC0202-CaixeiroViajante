#ifndef NO_H
    #define NO_h

    #include <stdbool.h>

    typedef struct no_ NO;

    struct no_{
        int cidade_id;
        int distancia;
        NO* proximo;
    };

    NO *no_criar(int id, int dist);
    int get_id(NO* x);
    int get_dist(NO* x);
    bool no_apagar(NO** item);



#endif
