add_library(awesome)
add_library(awesome::awesome ALIAS awesome)
target_sources(awesome
  PRIVATE awesome.cpp
  INTERFACE
    FILE_SET headers
    TYPE HEADERS
    FILES awesome.hpp
)

## Set the include directory
#target_include_directories(awesome PUBLIC
#  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
#  $<INSTALL_INTERFACE:${CMAKE_INSTALL_PREFIX}/include>
#)

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
