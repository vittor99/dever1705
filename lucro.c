#include <stdio.h>

int main() {

//faça um programa em que o usuario digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (tambem soliciytadas pelo teclado). para concluir o orograma pergunta qual o valor de venda e indica a porcentagem do lucro da mercadoria.

  float custo, valorFrete, despesas, valorVendas, valorBruto, lucro;

printf("digite o valor de custo da mercadoria:");
  scanf("%f", &custo);

  printf("digite o valor de custo do frete:");
  scanf("%f", &valorFrete);


printf("digite o valor de custo das despesas:");
  scanf("%f", &despesas);


printf("digite o valor de venda");
  scanf("%f", &valorVendas);

valorBruto = custo + valorFrete + despesas;

lucro = (valorVendas/valorBruto)*100;

  printf("a porcentagem do lucro e: %.2f%%",lucro);



  
}