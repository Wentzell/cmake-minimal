# Create the executable
add_executable(main main.cpp)

# Link our library
target_link_libraries(main PRIVATE awesome)

# Add fmt library using CPM and link against it
CPMAddPackage("gh:fmtlib/fmt#master")
target_link_libraries(main PRIVATE fmt::fmt)

# Install binary
install(TARGETS main DESTINATION bin)
