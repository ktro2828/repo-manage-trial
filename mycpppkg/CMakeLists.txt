cmake_minimum_required(VERSION 3.13)

project(mycpppkg)

add_library(calculate SHARED src/calculate.cpp)
target_include_directories(calculate PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_executable(main src/main.cpp)
target_link_libraries(main calculate)
