cmake_minimum_required(VERSION 3.14)  # Update minimum version
project(house_theme_bridge)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library
add_library(house_theme_bridge STATIC
    src/Theme.cpp
    src/House.cpp
)

target_include_directories(house_theme_bridge PUBLIC include)

# Executable
add_executable(house_theme_main src/main.cpp)
target_link_libraries(house_theme_main house_theme_bridge)

# Tests
option(BUILD_TESTING "Build tests" ON)

if(BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()
