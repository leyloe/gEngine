#pragma once

#include "Window.hpp"

namespace ge
{
    class Device
    {
    private:
        VkInstance instance;
        void createInstance();

    public:
        Device();
        ~Device();
    };

}