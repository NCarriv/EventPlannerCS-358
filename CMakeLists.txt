cmake_minimum_required(VERSION 3.14)
project(EventPlannerCS-358)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()

# Include GoogleTest via FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent override of parent project's compiler settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Library source files
add_library(event_lib Event.cpp)

target_include_directories(
    event_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# Unit test executable
add_executable(unit_tests EventTests.cpp)

target_link_libraries(unit_tests PRIVATE event_lib gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_tests)