#include <iostream>
#include <Eigen/Dense>
 
using namespace Eigen;
using namespace std;

int main()
{
  Matrix2d mat;
  int a, b, c, d;

  cout << "input 2 x 2 matrix: " << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  
  mat << a, b,
         c, d;

  cout << "input 2 x 1 vector u element: " << endl;
  cin >> a;
  cin >> b;

  cout << "input 2 x 1 vector v element: " << endl;
  cin >> c;
  cin >> d;

  Vector2d u(a,b), v(c,d);

  std::cout << "matrix:\n" << mat << std::endl;
  std::cout << "vector u:\n" << u << std::endl;
  std::cout << "vector v:\n " << v << std::endl;

  std::cout << "mat * mat:\n" << mat*mat << std::endl;
  std::cout << "mat * u:\n" << mat*u << std::endl;
  std::cout << "transposed u * mat:\n" << u.transpose()*mat << std::endl;
  std::cout << "transposed u * v:\n" << u.transpose()*v << std::endl;
  std::cout << "transposed u * transposed v:\n" << u*v.transpose() << std::endl;
}
