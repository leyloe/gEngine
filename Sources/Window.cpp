#include "Window.hpp"

#include <stdexcept>

namespace ge
{
    Window::Window(int w, int h, std::string name) : width{w}, height{h}, windowName{name}
    {
        initWindow(w, h, name);
    }

    Window::~Window()
    {
        glfwDestroyWindow(window);

        glfwTerminate();
    }

    bool Window::shouldClose()
    {
        return glfwWindowShouldClose(window);
    }

    void Window::createWindowSurface(VkInstance instance, VkSurfaceKHR *surface)
    {
        if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS)
        {
            throw std::runtime_error("failed to create window surface!");
        }
    }

    void Window::initWindow(int w, int h, std::string name)
    {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(w, h, name.c_str(), nullptr, nullptr);
    }
}
