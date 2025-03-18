#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include <Eigen/LU>
 
using Eigen::MatrixXd;
using namespace Eigen;
using namespace std;

int main()
{
  // Valores y vectores propios
  MatrixXd A(4,4);
  A << 3, -1, 4, 3,
     -5, 0, -2, 1,
     1, -2, 6, 2,
     4, 5, 7, -3;

  cout << "Aquí tenemos la matriz, A:" << endl << A << endl << endl;


  EigenSolver<MatrixXd> es(A);
  cout << "Los valores propios de A son:" << endl << es.eigenvalues() << endl;
  cout << "La matriz de vectores propios, V, es:" << endl << es.eigenvectors() << endl << endl;

  // Las normas de las matrices y vectores
  Eigen::VectorXd v(4);

  v << 1, -1,  4, -2;

  cout << "El vector v es: " << endl << v << endl;
  std::cout << "v.squaredNorm() = \n" << v.squaredNorm() << std::endl;
  std::cout << "v.norm() = " << v.norm() << std::endl;
  std::cout << "v.lpNorm<1>() = " << v.lpNorm<1>() << std::endl;
  std::cout << "v.lpNorm<Infinito>() = " << v.lpNorm< Eigen::Infinity >() << std::endl;

  cout << "La matriz es: " << A << endl << endl;
  std::cout << std::endl;
  std::cout << "A.squaredNorm() = " << A.squaredNorm() << std::endl;
  std::cout << "A.norm() = " << A.norm() << std::endl;
  std::cout << "A.lpNorm<1>() = " << A.lpNorm<1>() << std::endl;
  std::cout << "A.lpNorm<Infinito>() = " << A.lpNorm< Eigen::Infinity >() << std::endl;

  cout << "La matriz es: \n" << A << endl << endl;
  std::cout << std::endl;
  std::cout << "A.squaredNorm() = " << A.squaredNorm() << std::endl;
  std::cout << "A.norm() = " << A.norm() << std::endl;
  std::cout << "A.lpNorm<1>() = " << A.lpNorm<1>() << std::endl;
  std::cout << "A.lpNorm<Infinito>() = " << A.lpNorm< Eigen::Infinity >() << std::endl;


  // Ahora vamos a ver la descomponsición LU y su uso en resolución de sistemas e inversas
  MatrixXd M(3,3);
  M <<  3, -0.1, -0.2,
       0.1, 7, -.3,
       0.3, -.2, 10;

  Eigen::VectorXd B(3);
  B << 7.85, -19.3, 71.4;
  
  MatrixXd X = M.lu().solve(B);
  cout << "Esta es la solución para v de la ecuación MX=B:" << endl << X << endl;
  cout << "Y el error relativo: " << (M*X-B).norm() / B.norm() << endl;
}
