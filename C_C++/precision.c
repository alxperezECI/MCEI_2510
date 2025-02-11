#include <stdio.h>

int main(){
  printf("Hola Mundo MCEI!!!\n");
  double ad , bd;
  float  as, bs;
  as = ad = 1.;
  for(int i = 0; i < 100000 ; i++){
     as = as + 0.00001;
     ad = ad + 0.00001;
  }

  printf("El valor de a en simple precisión es: %15f\n", as);
  printf("El valor de a en doble precisión es: %15f\n", ad);
  return 0;
}
