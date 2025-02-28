#include "App.hpp"

namespace ge
{
    void App::run()
    {
        while (!window.shouldClose())
        {
            glfwPollEvents();
        }
    }
}