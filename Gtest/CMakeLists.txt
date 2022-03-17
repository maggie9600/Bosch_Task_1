cmake_minimum_required(VERSION 3.23)
project(Gtest)
ADD_LIBRARY( CustomLib STATIC math.cpp )
add_executable(${PROJECT_NAME} googletest.cpp)
set(CMAKE_CXX_STANDARD 11)
target_link_libraries(${PROJECT_NAME} PUBLIC
CustomLib
gtest
gtest_main
)