#include<stdio.h>

int main(){
  printf("==============================\n");
  printf("          NOTA LEGAL\n");
  printf("==============================\n");
  printf("%-12s %-5s %-5s %-4s\n","Produto", "Qtd", "Valor", "Unit");
  printf("%-12s %-11i %-5.02f\n","Camiseta",002,39.99);
  printf("%-12s %-11i %-5.02f\n","Calca",001,89.90);
  printf("%-12s %-11i %-5.02f\n","Meia Social",003,19.99);
  printf("==============================\n");
  printf("Total:                   229.85\n");

  return 0;
}