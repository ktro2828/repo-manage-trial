cmake_minimum_required(VERSION 3.13)

project(mycpppkg)

# Search packages
find_package(OpenCV REQUIRED)

# Specify include directories
include_directories(SYSTEM
    ${OpenCV_INCLUDE_DIRS}
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# Create a set of source files
file(GLOB source_files src/calculate.cpp src/image.cpp)

# Specify source files to generate object file
add_library(source OBJECT ${source_files})

# Specify the executable file
add_executable(main src/main.cpp)

# Specify library to link
target_link_libraries(main ${source} ${OPENCV_LIBRARIES})
