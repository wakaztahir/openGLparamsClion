cmake_minimum_required(VERSION 3.21)
project(openGL)

set(CMAKE_CXX_STANDARD 14)

add_executable(openGL src/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC Dependencies/GLFW/include)

target_link_directories(${PROJECT_NAME} PUBLIC Dependencies/GLFW/lib-vc2019/)

target_link_libraries(${PROJECT_NAME} glfw3)

find_package(OpenGL REQUIRED)

target_link_libraries(${PROJECT_NAME} OpenGL::GL)