#include "awesome.hpp"
#include <cblas.h>
#include <stdexcept>

namespace awesome {

double dot(std::vector<double> const &x, std::vector<double> const &y) {
  if (x.size() != y.size()) throw std::invalid_argument("Vectors must have the same size.");
  return cblas_ddot(x.size(), x.data(), 1, y.data(), 1);
};

} // namespace awesome
