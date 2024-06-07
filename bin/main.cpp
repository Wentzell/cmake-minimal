#include <vector>
#include <fmt/core.h>
#include <awesome.hpp>

int main() {
  // Print the dot product of two vectors
  auto x = std::vector{1.0, 2.0, 3.0};
  auto y = std::vector{4.0, 5.0, 6.0};
  fmt::print("Dot product: {}\n", awesome::dot(x, y));

  return 0;
}
