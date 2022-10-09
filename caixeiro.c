#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int ordem[13];
int ordemf[13];

void DFS(LISTA *cidades[13], int n, int inicio, int atual, int visitado[13], int soma, int n_passados, int *menor){
//  printf("oi");

  if(atual == inicio && n_passados == n){

    if(soma < *menor){
    //  printf("%d %d\n", soma, *menor);

      *menor = soma;
      //printf("lolzinho");

      for(int i = 0; i < n; i++)
        ordemf[i] = ordem[i];
    }

    return;
  }

  if(visitado[atual] == 1 || (atual == inicio && n_passados != n && n_passados != 0)){
  //  printf("tchau");
    return;
  }

  if(atual != inicio)
    visitado[atual] = 1;

  ordem[n_passados] = atual;

  LISTA *lista;
  lista = cidades[atual];

  NO *no;
  no = get_inicio(lista);

  n_passados++;

  int x;
  while(no != NULL){
    x = soma;
    x += get_dist(no);
    DFS(cidades, n, inicio, get_id(no), visitado, x, n_passados, menor);

    no = get_proximo(no);
  //  printf(" get: %d ", get_id(no));
  }

  visitado[atual] = -1;
  n_passados--;

  return;
}

int main(){
    int n, inicio;
    scanf("%d %d", &n, &inicio);

    LISTA *cidades[13]; //Criando um vetor de list para 12 cidades
    int cidades_passadas[13];

    for(int i = 0 ; i < 13; i++){
        cidades[i] = lista_criar(); //Cada cidade criada é uma lista, que contem as cidades conectadas
        cidades_passadas[i] = -1;
    }
    char c;
    while((c = getchar()) != EOF){
        int a, b, distancia;
        scanf("%d %d %d", &a, &b, &distancia);
        lista_inserir(cidades[a], distancia, b); //Adicionando a cidade b a lista de cidades conectadas com a, junto com sua distancia.
        lista_inserir(cidades[b], distancia, a); //Fazendo o mesmo vice-versa
    }

    int *menor;
    menor = (int*)malloc(1*sizeof(int));
    *menor = 9999999;

    int soma = 0;
    int n_passados = 0;
    DFS(cidades, n, inicio, inicio, cidades_passadas, soma, n_passados, menor);

    for(int i = 0; i < n; i++){
      printf("%d ", ordemf[i]);
    }
    printf("%d", ordem[0]);


  //  printf("%d", inicio);

  /* for(int i = 1; i <= n; i++){
        printf("\ni: %d\n", i);
        if(get_inicio(cidades[i]) != NULL){
            printf("lista tamanho: %d\n", lista_tamanho(cidades[i]));
            NO* temp = get_inicio(cidades[i]);

            while(temp != NULL){
                printf("id: %d\n", get_id(temp));
                printf("\n");
                if(temp == temp->proximo){
                    break;
                }
                temp = temp->proximo;
            }
        }
    }(*/


    return 0;
}
