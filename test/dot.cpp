#include <gtest/gtest.h>
#include <awesome.hpp>

TEST(Awesome, Dot) {
  auto v = std::vector{1.0, 2.0, 3.0};
  EXPECT_EQ(awesome::dot(v, v), 14);
}
