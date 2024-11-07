#include <iostream>
#include <stdexcept>
#include "matrix.hpp"
#include "mtx.hpp"
int main()
{
  size_t n = 0, m = 0;
  std::cin >> n >> m;
  matrix M(n, m);
  try
  {
    M.input();
  }
  catch (const std::exception &e)
  {
    return 1;
  }
  M.output();
  std::cout << M.get_rows() << "\n";
  return 0;
}
