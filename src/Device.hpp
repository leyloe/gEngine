#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace ge
{
    class Device
    {
    private:
        VkInstance createInstance();

    public:
        Device();
        ~Device();
    };

}