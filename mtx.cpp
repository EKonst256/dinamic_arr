#include "mtx.hpp"
#include <iostream>

void input(int ** t, size_t m, size_t n)
{
  for(size_t i = 0; i < m; i++) {
    for(size_t j = 0; j < n; j++) {
      std::cin >> t[i][j];
    }
  }
}

void output(const int * const * t, size_t m, size_t n)
{
  for(size_t i = 0; i < n; i++) {
    std::cout << t[i][0];
      for(size_t j = 1; j < m; j++) {
        std::cout << " " << t[i][j];
      }
  }
}

void destroy(int ** t, size_t n)
{
  for(size_t i = 0; i < n; i++) {
    delete[] t[i];
  }
  delete[] t;
  return;
}

int ** create_arr(int m, int n)
{
  size_t created = 0;
  int ** t = new int*[m];
  try {
    for(;created < n; created++) {
      t[created] = new int[n];
    }
  } catch(const std::bad_alloc &e) {
    destroy(t, created);
    throw;
  }
  return t;
}
