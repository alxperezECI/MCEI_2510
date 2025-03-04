#include<bits/stdc++.h>
#include <iomanip>
#define MAX_ITER 100

using namespace std;

// Un ejemplo de uso del método newton - Rapson para encontra la raíz
// La función es: f(x) = exp(-x) - x
double func(double x)
{
    return exp(-x) - x;
}

// Derivada de func
double der_func(double x){
  return -exp(-x) - 1;
}


// Imprime la raíz de la funición func(x) en el intervalo [a, b]
void newton_rapson(double (*f)(double), double (*der)(double), double x0)
{
    int count = 1;
    double x2, xi = x0;  // Inicializa el resultado
    double err = 1000;
    cout << "Itr \t Xr \t err" << endl;

    while(abs(err) > 0.00001){
      x2 = xi - f(xi)/der(xi);
      err = (x2 - xi) / x2;
      cout << count++ << "\t" << setprecision(16) << xi << "\t" << err << endl;
      xi = x2;
    }
    cout << "con " << count << " iteracions." << endl;
}

// Llama la función que implementa el método
int main(int argc, char** argv)
{
  // Valores iniciales asumidos
  double x0 = 0;
  cout << "Número de argumentos: " << argc << endl;
  cout << "Argumento 0: " << argv[0] << endl;
  cout << "Argumento 1: " << argv[1] << endl;

  x0 = atof( argv[1] );
  newton_rapson(func, der_func, x0 );
  return 0;
}
