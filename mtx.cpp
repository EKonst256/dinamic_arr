#include "mtx.hpp"
#include <iostream>
#include <stdexcept>

void input(int ** t, size_t n, size_t m)
{
  for(size_t i = 0; i < n; i++) {
    for(size_t j = 0; j < m; j++) {
      std::cin >> t[i][j];
    }
  }
  if(!std::cin) {
    destroy(t, n);
    throw std::exception();
  }
}

void output(const int * const * t, size_t n, size_t m)
{
  for(size_t i = 0; i < n; i++) {
    std::cout << t[i][0];
      for(size_t j = 1; j < m; j++) {
        std::cout << " " << t[i][j];
      }
    std::cout << "\n";
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

int ** create_arr(size_t n, size_t m)
{
  size_t created = 0;
  int ** t = new int*[n];
  try {
    for(;created < m; created++) {
      t[created] = new int[m];
    }
  } catch(const std::bad_alloc &e) {
    destroy(t, created);
    throw;
  }
  return t;
}
