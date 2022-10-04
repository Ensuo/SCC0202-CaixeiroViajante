#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    int n;

    list** cidades = (list**) malloc(12*sizeof(list*)); //Criando um vetor de list para 12 cidades
    int cidades_passadas[12];

    for(int i = 0 ; i < 12; i++){
        cidades[i] = lista_criar(); //Cada cidade criada é uma lista, que contem as cidades conectadas
        cidades_passadas[i] = -1;
    }

    for(int i = 0; i < n; i++){
        int a, b, distancia;
        scanf("%d %d %d", &a, &b, &distancia);
        
        lista_inserir(cidades[a], distancia, b); //Adicionando a cidade b a lista de cidades conectadas com a, junto com sua distancia.
    }
    
    return 0;
}