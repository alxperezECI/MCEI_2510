#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
 
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
  Eigen::VectorXf v(4);

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

}
