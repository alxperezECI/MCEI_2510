#include <stdio.h>
#include <math.h>
//#include <cmath>

int main(){
  printf("Problema del paracaidista\n");
  printf("t(s) \t V_real \t V_app \t error\n");
  double c, masa, g;
  c = 12.5;
  masa = 68.1;
  g = 9.8;

  double t[71], vel_real[71], vel_app[71];

  for (int i = 0; i < 71; i++)
    t[i] = 0.5*i;

  for(int i = 0; i < 71; i++){
    vel_real[i] =  masa*g/c*(1-exp(-c/masa*t[i]));
  }

  vel_app[0] = 0.;
  for(int i = 1; i < 71 ; i++){
     vel_app[i] = vel_app[i-1] + (g - c*vel_app[i-1]/masa)*0.5;
  }

  for(int i = 0; i < 71; i++)
     printf("%10f \t %10f \t %10f \t %10f\n",t[i], vel_real[i], vel_app[i], vel_real[i] - vel_app[i]);

  return 0;
}
