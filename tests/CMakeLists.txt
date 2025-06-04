cmake_minimum_required(VERSION 3.14)  # Need at least CMake 3.14 for FetchContent

include(FetchContent)

# Download and build GoogleTest
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1  # Use a stable release tag
)

# This will make the GTest targets available
FetchContent_MakeAvailable(googletest)

# Test executables
add_executable(test_Color test_Color.cpp)
target_link_libraries(test_Color
    house_theme_bridge
    gtest_main  # Links gtest and gtest_main
)

add_executable(test_Theme test_Theme.cpp)
target_link_libraries(test_Theme
    house_theme_bridge
    gtest_main
)

add_executable(test_House test_House.cpp)
target_link_libraries(test_House
    house_theme_bridge
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_Color)
gtest_discover_tests(test_Theme)
gtest_discover_tests(test_House)
