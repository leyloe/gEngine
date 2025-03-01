#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>
#include <optional>
#include <vector>
#include <string.h>
#include <set>
#include <limits>
#include <algorithm>
#include <stdexcept>

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
        bool shouldClose();
        void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);
        void GetFramebufferSize(int *width, int *height);

        Window(const Window &) = delete;
        Window &operator=(const Window &) = delete;
    };
}