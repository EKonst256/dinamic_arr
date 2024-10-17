#ifndef MATRIX_HPP
#define MATRIX_HPP
int ** create_arr(int m, int n);
void destroy(int ** t, size_t n, size_t m);
void input(int ** t, size_t m, size_t n);
void output(const int * const * t, size_t m, size_t n);
#endif
