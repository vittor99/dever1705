#include <stdio.h>

int main() {

  //dadas as medidas de uma sala, informe sua area.

  float comprimento, largura, area;

  printf("digite o comprimento da sala:");
  scanf("%f", &comprimento);

   printf("digite o largura da sala:");
  scanf("%f", &largura);
  

  area = largura * comprimento;

  printf("A area da sala e: %.2fm2", area);









  
}