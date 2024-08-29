#include <stdio.h>


int main (){

long int isbn = 9999999999999;
short int num_pag = 999;
float preco_livro = 9999.0f;
int publi = 9999;

  printf("ISBN: %li\n", isbn);
  printf("Num. Paginas: %i\n", num_pag);
  printf("Preco: R$ %.02f\n", preco_livro);
  printf("Publicado em: %04i\n", publi);
  


  
  return 0;

}