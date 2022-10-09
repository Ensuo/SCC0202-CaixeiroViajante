#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include "circulo.h"

int main(){
  float xc, yc, r; //coordenadas do centro do circulo e o comprimento do raio
  scanf("%f %f %f", &xc, &yc, &r);

  int casos_testes;//quantidade de casos testes
  scanf("%d", &casos_testes);

  float xp, yp;//coordenadas do ponto que nao e o centro do circulo
  for(int i = 0; i < casos_testes; i++){
    scanf("%f %f", &xp, &yp);

    PONTO *pc;
    pc = ponto_criar(xc, yc);

    PONTO *pp;
    pp = ponto_criar(xp, yp);

    float distancia;
    distancia = pontos_distancia(pp, pc); //distancia entre o ponto e o centro do circulo


    resposta_print(r, distancia);
  }//printar se o ponto esta dentro, fora ou no circulo atraves de uma comparacao entre o raio e a distancia entre os pontos


  return 0;
}
