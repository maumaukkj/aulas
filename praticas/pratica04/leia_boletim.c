#include <stdio.h>

  int main(){
  int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Entre com matricula: ");
  scanf("%i",&matricula);
  getchar();
  printf("Entre com nota A1: ");
  scanf("%f",&a1);
  getchar();
  printf("Entre com nota A1: ");
  scanf("%f",&a2);
  getchar();
  printf("Entre com media: ");
  scanf("%f",&media);
  getchar();
  printf("\nMatricula\tA1\tA2\tMedia\n");
  printf("%i\t%.1f\t%.1f\t%.1f\n",matricula, a1,a2,media);



  return 0;
}