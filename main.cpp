#include <iostream>
#include "matrix.hpp"
int main()
{
  matrix M{4, 4};
  std::cout << M.get_rows() << "\n";
}
