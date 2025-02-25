#pragma once

#include "Window.hpp"

#include <vector>

namespace ge
{
    class Device
    {
    private:
        VkInstance instance;
        void createInstance();
        bool checkValidationLayerSupport();

        const std::vector<const char *> validationLayers = {"VK_LAYER_KHRONOS_validation"};

    public:
#ifdef NDEBUG
        const bool enableValidationLayers = false;
#else
        const bool enableValidationLayers = true;
#endif

        Device();
        ~Device();
    };

}