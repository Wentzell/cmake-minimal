add_library(awesome)
add_library(awesome::awesome ALIAS awesome)
target_sources(awesome
  PRIVATE awesome.cpp
  INTERFACE
    FILE_SET headers
    TYPE HEADERS
    FILES awesome.hpp
)

# Set C++ standard to C++20 for the library
target_compile_features(awesome PUBLIC cxx_std_20)

# Find and link BLAS library
set(BLA_VENDOR OpenBLAS)
find_package(BLAS REQUIRED)
target_link_libraries(awesome PRIVATE BLAS::BLAS)

# Install the library and export target
install(
  TARGETS awesome EXPORT awesome-targets
  FILE_SET headers DESTINATION include
)
