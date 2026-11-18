cmake_minimum_required(VERSION 3.14)

#need to change the project name to match the name of your project
project(Event)

set(CMAKE_CXX_STANDARD 17)

# Fetch GoogleTest automatically
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows MSVC runtime flexibility
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# change crap
enable_testing()

# change more crap
add_library()

#change the name of the test file to match the name of your test file
add_executable(run_tests)
#PRIVATE BankAccount - change this
target_link_libraries(run_tests GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(run_tests)

#
#
# Template I pulled from
# cmake_minimum_required(VERSION 3.14)
#project(BankAccountTest)

#set(CMAKE_CXX_STANDARD 17)

# Fetch GoogleTest automatically
#include(FetchContent)
#FetchContent_Declare(
  #googletest
  #URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
#)
# For Windows MSVC runtime flexibility
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#FetchContent_MakeAvailable(googletest)

#enable_testing()

#add_library(BankAccount BankAccount.cpp)

#add_executable(run_tests BankAccountTest.cpp)
#target_link_libraries(run_tests PRIVATE BankAccount GTest::gtest_main)

#include(GoogleTest)
#gtest_discover_tests(run_tests)
#
#
#