#include <iostream>
#include <string>
#include <cmath>
#include "math_vector.hpp"

MathVector MathVector::add(const MathVector &vec)
{
  MathVector result;
  result.x = x + vec.x;
  result.y = y + vec.y;
  return result;
}

MathVector MathVector::mult(int s)
{
  MathVector result;
  result.x = s * x;
  result.y = s * y;
  return result;
}

int MathVector::mult(const MathVector &vec)
{
  int value = x * vec.x + y * vec.y;
  return value;
}

std::string vec_to_str(const MathVector &vec)
{
  return std::to_string(vec.x) + ":" + std::to_string(vec.y);
}

double MathVector::magnitude()
{
  double value = x * x + y * y;
   return sqrt(value);
}

int main()
{

  MathVector v1;
  MathVector v2(3, 2);
  MathVector v3(10, 12);

  std::cout << "V1:" << vec_to_str(v1)
            << ", V2:" << vec_to_str(v2)
            << ", V3:" << vec_to_str(v3)
            << std::endl;

  MathVector add_result = v1.add(v2);
  std::cout << "Sum of v1 and v2 is: " << vec_to_str(add_result) << std::endl;
  MathVector add_result2 = v2.add(v3);
  std::cout << "Sum of v2 and v3 is: " << vec_to_str(add_result2) << std::endl;

  int scalar = 20;
  MathVector mult_result = v2.mult(scalar);
  std::cout << "mult of v2 and " << scalar << " is: " << vec_to_str(mult_result) << std::endl;

  int result = v1.mult(v2);
  std::cout << "mult of v1 and v2 is: " << result << std::endl;

  int result2 = v2.mult(v3);
  std::cout << "mult of v2 and v3 is: " << result2 << std::endl;

  double dbl_result = v2.magnitude();
  std::cout << "magnitude of v2 is: " << dbl_result << std::endl;
}
