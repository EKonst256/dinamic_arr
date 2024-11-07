#ifndef GEOMETRY_H
#define GEOMETRY_H
#include <cstddef>
#include "mtx.hpp"
class matrix
{
  size_t n_, m_;
  public:
    int **t_;
    size_t get_rows();
    size_t get_colunms();
    void resize(size_t, size_t);

    ~matrix()
    {
      ::destroy(t_, n_);
    }

    matrix(size_t n, size_t m):
      t_(create_arr(n, m)), n_(n), m_(m)
      {}

    void input()
    {
      ::input(t_, n_, m_);
    }

    void output()
    {
      ::output(t_, n_, m_);
    }
};
#endif