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

#ifdef NDEBUG
        const bool enableValidationLayers = false;
#else
        const bool enableValidationLayers = true;
#endif
    };

}