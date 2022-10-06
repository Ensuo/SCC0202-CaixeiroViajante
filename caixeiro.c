#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int distancia(list* cidades, int inicio, int fim){
    
}

int main(){
    int n, temp;

    list *cidades[13]; //Criando um vetor de list para 12 cidades
    int cidades_passadas[12];


    for(int i = 0 ; i < 12; i++){
        cidades[i] = NULL;
        cidades[i] = lista_criar(); //Cada cidade criada é uma lista, que contem as cidades conectadas
        cidades_passadas[i] = -1;
    }

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int a, b, distancia;
        scanf("%d %d %d", &a, &b, &distancia);
        lista_inserir(cidades[a], distancia, b); //Adicionando a cidade b a lista de cidades conectadas com a, junto com sua distancia.
        lista_inserir(cidades[b], distancia, a); //Fazendo o mesmo vice-versa
    }

    for(int i = 1; i <= n; i++){
        printf("i: %d\n", i);
        if(get_inicio(cidades[i]) != NULL){
            printf("lista tamanho: %d\n", lista_tamanho(cidades[i]));
            NO* temp = get_inicio(cidades[i]);
            for(int j = 0; j < lista_tamanho(cidades[i]); j++){
                printf("id atual: %d\n", get_id(temp));
                temp = temp->proximo;
            }
        }   
    }
    

    return 0;
}