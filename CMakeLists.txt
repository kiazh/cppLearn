cmake_minimum_required(VERSION 3.20)
project(Cpp)

set(CMAKE_CXX_STANDARD 17)

# GLFW (Homebrew)
find_package(glfw3 3.3 REQUIRED)

# GLM (header-only)
find_package(glm REQUIRED)

add_executable(Cpp main.cpp glad/src/glad.c)
target_include_directories(Cpp PRIVATE glad/include)

target_link_libraries(Cpp
        glfw
        glm::glm
        "-framework Cocoa"
        "-framework OpenGL"
        "-framework IOKit"
        "-framework CoreVideo"
)
