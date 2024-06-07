# Create the executable
add_executable(dot dot.cpp)

# Link our library
target_link_libraries(dot PRIVATE awesome)

# Add gtest library using CPM and link against it
CPMAddPackage("gh:google/googletest#main")
target_link_libraries(dot PRIVATE gtest_main)

# Add the test
add_test(NAME test_dot COMMAND dot)
