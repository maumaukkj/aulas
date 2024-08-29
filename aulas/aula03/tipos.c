#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  // char 'a', 'v', ' '
  // int -5, 5, 0
  // float -5.5f, 0.0, 5.5f
  // double -5.5, 0.0, 5.5
  // void


  printf("O tamanho do chr na memoria eh %lu byte(s)\n",sizeof(char));
  printf("O tamanho do int na memoria eh %lu byte(s)\n",sizeof(int));
  printf("O tamanho do float na memoria eh %lu byte(s)\n",sizeof(float));
  printf("O tamanho do doble na memoria eh %lu byte(s)\n",sizeof(double));
  printf("O tamanho do void na memoria eh %lu byte(s)\n",sizeof(void));
  
  printf("\n");

  printf("A faixa de valores do char vai de %i ate %i\n",CHAR_MIN, CHAR_MAX);
  printf("A faixa de valores do int vai de %i ate %i\n",INT_MIN, INT_MAX);
  printf("A faixa de valores do float vai de %E ate %E\n",FLT_MIN, FLT_MAX);
  printf("A faixa de valores do doble vai de %E ate %E\n",DBL_MIN, DBL_MAX);

   printf("\n");

   printf("O tamanho do short int na memoria eh %lu byte(s)\n",sizeof(short int));
   printf("O tamanho do long int na memoria eh %lu byte(s)\n",sizeof(long int));
   printf("O tamanho do long doble na memoria eh %lu byte(s)\n",sizeof(long double));

  printf("\n");
  
  printf("A faixa de valores do short int vai de %i ate %i\n",SHRT_MIN, SHRT_MAX);
  printf("A faixa de valores do long int vai de %li ate %li\n",LONG_MIN, LONG_MAX);
  printf("A faixa de valores do long doble vai de %LE ate %LE\n",LDBL_MIN, LDBL_MAX);

  printf("\n");

  printf("A faixa de valores do unsigned char vai de %i ate %i\n", 0 , UCHAR_MAX);
  printf("A faixa de valores do unsigned int vai de %i ate %lu\n", 0 , UINT_MAX);
  printf("A faixa de valores do unsigned short int vai de %i ate %i\n", 0 , USHRT_MAX);
  printf("A faixa de valores do unsigned long vai de %i ate %lu\n", 0 , ULONG_MAX);
  
  return 0;
}