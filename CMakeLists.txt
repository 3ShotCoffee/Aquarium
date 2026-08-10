cmake_minimum_required(VERSION 3.20)

project(AquariumSim LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -----------------------
# Source files
# -----------------------

add_executable(AquariumSim
    src/main.cpp

    src/glad.c

    src/Core/Application.cpp
    src/Core/Window.cpp

    src/Renderer/Renderer.cpp
    src/Renderer/Shader.cpp
    src/Renderer/Camera.cpp

    src/Scene/Scene.cpp
)

# -----------------------
# Include directories
# -----------------------

target_include_directories(AquariumSim PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/includes
)

# -----------------------
# GLFW
# -----------------------

target_link_directories(AquariumSim PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

target_link_libraries(AquariumSim PRIVATE
    glfw3
)

# -----------------------
# Windows OpenGL
# -----------------------

if(WIN32)
    target_link_libraries(AquariumSim PRIVATE
        opengl32
    )
endif()