#include<iostream>
#include "mtx.hpp"

int main()
{
  size_t N = 0, M = 0;
  std::cin >> N >> M;
  try{
  int ** matrix = create_arr(N, M);
  } catch(const std::bad_alloc & e) {
    return 1;
  }
  input(matrix, N, M);
  output(matrix, N, M);
  return 0;
}
