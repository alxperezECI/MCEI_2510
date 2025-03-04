#include <iostream>
#include <unsupported/Eigen/Polynomials>

using namespace std;

int main(){

  Eigen::Vector3d coeff(-0.2151830138973625, -0.3111717537041549, 0.708563939215852);
  Eigen::PolynomialSolver<double, Eigen::Dynamic> solver;
  solver.compute(coeff);
  const Eigen::PolynomialSolver<double, Eigen::Dynamic>::RootsType &r = solver.roots();
  cout << r << endl;
  return 0;
}
