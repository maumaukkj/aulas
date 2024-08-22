#include <stdio.h>

int main(){
  printf("%5i\n",1234);
  printf("%5i\n",56789);
  printf("%05i", 1);
  printf("(%i, %i)\n", -1, 1);
  printf("%02i/%02i/%4i\n", 5,8,2024);
  
  return 0;
}