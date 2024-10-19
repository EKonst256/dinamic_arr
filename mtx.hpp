#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
int ** create_arr(size_t, size_t);
void destroy(int **, size_t);
void input(int **, size_t, size_t);
void output(const int * const *, size_t, size_t);
#endif
