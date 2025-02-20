#include "Window.hpp"

namespace ge
{
    Window::Window(int w, int h, std::string name) : width{w}, height{h}, windowName{name}
    {
        initWindow(w, h, name);
    }

    Window::~Window()
    {
    }

    void Window::initWindow(int w, int h, std::string name)
    {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(w, h, name.c_str(), nullptr, nullptr);
    }
}
