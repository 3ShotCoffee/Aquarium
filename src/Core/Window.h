#pragma once

#include <glad.h>
#include <glfw3.h>

// screen size
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

class Window
{
public:
    Window();
    ~Window();

    void run();

private:
    GLFWwindow* window = nullptr;
    
    static void framebuffer_size_callback(GLFWwindow *window, int width, int height);
    void process_input(GLFWwindow *window);
};