#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// screen size
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

class Window
{
public:
    Window();
    ~Window();

    bool should_close() { return glfwWindowShouldClose(window); }
    void swap_buffers() { glfwSwapBuffers(window); }
    void poll_events() { glfwPollEvents(); }

    void process_input();

private:
    GLFWwindow* window = nullptr;
    
    static void framebuffer_size_callback(GLFWwindow *window, int width, int height);
};