cmake_minimum_required(VERSION 3.10)

project(sort)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")


include_directories(${PROJECT_SOURCE_DIR}/include)  # 头文件目录

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)    # 可执行文件

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src)   # 添加子目录


