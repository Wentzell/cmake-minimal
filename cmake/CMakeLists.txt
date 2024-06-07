# Generate and install the Config and ConfigVersion files
configure_package_config_file(
  awesome-config.cmake.in
  awesome-config.cmake
  INSTALL_DESTINATION lib/cmake/awesome
)
write_basic_package_version_file(awesome-config-version.cmake COMPATIBILITY SameMajorVersion)
install(FILES 
  ${CMAKE_CURRENT_BINARY_DIR}/awesome-config.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/awesome-config-version.cmake
  DESTINATION lib/cmake/awesome
)

# Install the exported targets
install(EXPORT awesome-targets NAMESPACE awesome:: DESTINATION lib/cmake/awesome)
