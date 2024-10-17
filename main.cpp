#include<iostream>
#include "mtx.hpp"

int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
  try{
  int ** matrix = create_arr(M, N);
  } catch(const std::bad_alloc & e) {
    return 1;
  }
  return 0;
}
