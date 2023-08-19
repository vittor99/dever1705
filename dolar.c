#include <stdio.h>

int main() {



//dado um valor em reais e a cotaçao do dolar, converta esse valor para dolares.


float numero, cotacaoDolar, valorConvertido, reais ;

  printf("insira o valor: ");
  scanf("%f", &reais);

  printf("insira a cotacao do dolar: ");
  scanf("%f", &cotacaoDolar);

  valorConvertido = reais / cotacaoDolar;

  printf("O valor em dolar e: %f", valorConvertido);





  
}