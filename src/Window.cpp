#include "Window.hpp"

namespace ge
{
    Window::Window(int w, int h, std::string name) : width{w}, height{h}, windowName{name}
    {
    }

    Window::~Window()
    {
    }

    void Window::initWindow()
    {
    }
}
