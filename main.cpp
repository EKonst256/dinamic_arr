#include <iostream>
#include "mtx.hpp"
#include <stdexcept>

int main()
{
  size_t N = 0, M = 0;
  std::cin >> N >> M;
  int ** matrix = nullptr;
  try{
  matrix = create_arr(N, M);
  } catch(const std::bad_alloc & e) {
    return 1;
  }
  try{
  input(matrix, N, M);
  } catch(const std::exception & e) {
    return 2;
  }
  output(matrix, N, M);
  return 0;
}
