# 设置 CMake 最低版本要求
cmake_minimum_required(VERSION 3.28)

# 设置项目名称
project(OpenGLStudy)

# 设置 C++ 标准为 C++17
set(CMAKE_CXX_STANDARD 17)

# 查找 OpenGL 库
find_package(OpenGL REQUIRED)

# 查找 GLFW 库
find_package(glfw3 REQUIRED)

# 查找 GLEW 库
find_package(GLEW REQUIRED)

# 包含 OpenGL、GLFW 和 GLEW 的头文件目录
include_directories(${OPENGL_INCLUDE_DIRS} ${GLFW_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS})

# 添加可执行文件，包含源代码文件 main.cpp
add_executable(OpenGLStudy main.cpp)

# 链接 OpenGL、GLFW 和 GLEW 库到可执行文件 OpenGL_Study
# 注意这里的目标名称应该与你在 add_executable 中定义的名称一致
target_link_libraries(OpenGLStudy ${OPENGL_LIBRARIES} glfw GLEW::GLEW)