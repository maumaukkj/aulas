#include <stdio.h>

int main(){
char tecla = '\0';// caracter nulo

  printf("digite uma tecla: ");
  int deu_certo = scanf("%c",&tecla);
  getchar(); //limpra o \n
  printf("Voce digitou: %c\n", tecla);

  printf("digite uma tecla: ");
  deu_certo = scanf("%c",&tecla);
  getchar();
  printf("Voce digitou: %c\n", tecla);
  
char nome[30];
  printf("Digite seu nome: ", nome);
  deu_certo = scanf("%[^\n]s",nome);
  printf("Ola %s\n", nome);

  return 0;
}