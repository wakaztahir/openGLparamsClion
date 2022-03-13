cmake_minimum_required (VERSION 3.8)

add_executable (openGL5 "Application.cpp"  "VertexBuffer.h" "VertexBuffer.cpp")

target_include_directories(${PROJECT_NAME} 
	PUBLIC ../Dependencies/GLFW/include
	PUBLIC ../Dependencies/GLEW/include
)

target_link_directories(${PROJECT_NAME}
	PUBLIC ../Dependencies/GLFW/lib-vc2019/
	PUBLIC ../Dependencies/GLEW/lib/Release/Win32
)

target_link_libraries(${PROJECT_NAME} glfw3 glew32s)

find_package(OpenGL REQUIRED)

target_link_libraries(${PROJECT_NAME} OpenGL::GL)