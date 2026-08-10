#include "Application.h"

Application::Application()
{
}

Application::~Application()
{
}

void Application::run()
{
    while (!window.should_close())
    {
        window.process_input();
        
        // TODO : render

        // TODO : imgui

        window.swap_buffers();
        window.poll_events();
    }
}