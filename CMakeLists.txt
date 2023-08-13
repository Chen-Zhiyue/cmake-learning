cmake_minimum_required(VERSION 2.8)
project(Lena)

set(OpenCV_DIR F:/Opencv/opencv/build/x64/vc16/lib)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Lena main.cpp)

# 链接OpenCV库
target_link_libraries(Lena ${OpenCV_LIBS})
