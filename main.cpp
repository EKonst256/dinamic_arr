#include<iostream>
#include "mtx.hpp"

int main()
{
  size_t N = 0, M = 0;
  std::cin >> N >> M;
  int ** matrix = nullptr;
  try{
  matrix = create_arr(N, M);
  } catch(const std::bad_alloc & e) {
    std::cout << "\n";
    return 1;
  }
  input(matrix, N, M);
  output(matrix, N, M);
  return 0;
}
