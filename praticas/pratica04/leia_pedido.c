#include<stdio.h>

int main(){
char produto[21];
int quantidade = 0;
float valor = 0.0f;

  printf("Entre com o nome do produto: ");
  scanf("%s", produto);
  getchar();
  printf("Entre com a quantidade: ");
  scanf("%i", &quantidade);
  getchar();
  printf("Entre com o preco: ");
  scanf("%f", &valor);
  getchar();


printf("==============================\n");
printf("         P E D I D O\n"); 
printf("==============================\n");
printf("Produto \t Qtd\t Valor Unit\n");
printf("%-11s  %03i %10.2f\n",produto,quantidade,valor);
printf("==============================\n");
  
  
  
  
  


  return 0;
}