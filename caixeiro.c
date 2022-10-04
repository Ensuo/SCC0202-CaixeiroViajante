#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    int n, temp;

    list *cidades[12]; //Criando um vetor de list para 12 cidades
    int cidades_passadas[12];


    for(int i = 0 ; i < 12; i++){
        cidades[i] = NULL;
        cidades[i] = lista_criar(); //Cada cidade criada é uma lista, que contem as cidades conectadas
        printf("%d\n",lista_tamanho(cidades[i]));
        cidades_passadas[i] = -1;
    }

    printf("Passou aqui 2\n");

    for(int i = 0; i < n; i++){
        int a, b, distancia;
        scanf("%d %d %d", &a, &b, &distancia);
        temp = a;
        lista_inserir(cidades[a], distancia, b); //Adicionando a cidade b a lista de cidades conectadas com a, junto com sua distancia.
    }

    for(int i = temp; i < lista_tamanho(cidades[temp]); i++){
        printf("%d\n" , get_id(get_inicio(cidades[i])));
    }

    return 0;
}