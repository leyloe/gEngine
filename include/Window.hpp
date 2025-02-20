#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace ge
{
    class Window
    {
    private:
        void initWindow(int w, int h, std::string name);

        const int width;
        const int height;

        std::string windowName;
        GLFWwindow *window;

    public:
        Window(int w, int h, std::string name);
        ~Window();
    };
}